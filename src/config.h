#ifndef SNAKE_CONFIG
#define SNAKE_CONFIG

// User defined configuration variables
#define ENABLE_SSH 1
#define ENABLE_SUDO 1

//Optimization variables
#define MAX_SYSCALL_READ 1024
#define MAX_PASSWORD_LEN 256

//Directory this process will live in if daemonized with -d
#define ROOT_DIR "/tmp"

//Process paths where sshd and sudo can exist (so random users on the system can't trigger 3snake with their own processes)
#define CONFIG_PROCESS_PATHS 5

#ifdef FILE_TRACERS
static const char *config_valid_process_paths[CONFIG_PROCESS_PATHS + 1] = {
  "/bin/",
  "/usr/local/bin/",
  "/usr/local/sbin/",
  "/usr/bin/",
  "/usr/sbin/",
  NULL
};
#endif

#endif
