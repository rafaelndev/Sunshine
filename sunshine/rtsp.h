//
// Created by loki on 2/2/20.
//

#ifndef SUNSHINE_RTSP_H
#define SUNSHINE_RTSP_H

#include <atomic>

#include "crypto.h"
#include "thread_safe.h"

namespace stream {
struct launch_session_t {
  crypto::aes_t gcm_key;
  crypto::aes_t iv;
};

extern safe::event_t<launch_session_t> launch_event;

void rtpThread(std::shared_ptr<safe::event_t<bool>> shutdown_event);

}

#endif //SUNSHINE_RTSP_H