/* Example from Head First C.

Downloaded from https://github.com/twcamper/head-first-c

Modified by Allen Downey.
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <wait.h>


void error(char *msg)
{
    fprintf(stderr, "%s: %s\n", msg, strerror(errno));
    exit(1);
}

int main(int argc, char *argv[])
{
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <search phrase>\n", argv[0]);
        return 1;
    }
    pid_t pid;
    int id;
    const char *PYTHON = "/usr/bin/python2";
    const char *SCRIPT = "rssgossip.py";
    char *feeds[] = {
        "http://www.nytimes.com/services/xml/rss/nyt/Africa.xml",
        "http://www.nytimes.com/services/xml/rss/nyt/Americas.xml",
        "http://www.nytimes.com/services/xml/rss/nyt/MiddleEast.xml",
        "http://www.nytimes.com/services/xml/rss/nyt/Europe.xml",
        "http://www.nytimes.com/services/xml/rss/nyt/AsiaPacific.xml"
    };
    int num_feeds = 5;
    char *search_phrase = argv[1];
    char var[255];

    for (int i=0; i<num_feeds; i++) {
        fprintf(stdout, "Fork=%d\n", i);
        pid = fork();
        if (pid == 0) {
            sleep(i);
            sprintf(var, "RSS_FEED=%s", feeds[i]);
            char *vars[] = {var, NULL};
            int res = execle(PYTHON, PYTHON, SCRIPT, search_phrase, NULL, vars);
            if (res == -1) {
                error("Can't run script.\n");
            }
            exit(i);
        }
        if (pid == -1) {
            error("Can't fork.\n");
            exit(1);
        }
    }
    for (int i=0; i<5; i++) {
        pid = wait(&id);
        if (pid == -1) {
          error("Can't wait.\n"); // haha
          exit(1);
        }
        id = WEXITSTATUS(id);
        printf("Feed %d exited: %d\n", pid, id);
    }
    return 0;
}
