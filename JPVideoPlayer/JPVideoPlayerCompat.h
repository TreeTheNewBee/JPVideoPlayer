/*
 * This file is part of the JPVideoPlayer package.
 * (c) NewPan <13246884282@163.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 *
 * Click https://github.com/Chris-Pan
 * or http://www.jianshu.com/users/e2f2d779c022/latest_articles to contact me.
 */

#ifndef JPVideoPlayerCompat
#define JPVideoPlayerCompat

#import <UIKit/UIKit.h>

#define dispatch_main_async_safe(block)\
if (strcmp(dispatch_queue_get_label(DISPATCH_CURRENT_QUEUE_LABEL), dispatch_queue_get_label(dispatch_get_main_queue())) == 0) {\
block();\
} else {\
dispatch_async(dispatch_get_main_queue(), block);\
}

UIKIT_EXTERN NSString * _Nonnull const JPVideoPlayerDownloadStartNotification;
UIKIT_EXTERN NSString * _Nonnull const JPVideoPlayerDownloadReceiveResponseNotification;
UIKIT_EXTERN NSString * _Nonnull const JPVideoPlayerDownloadStopNotification;
UIKIT_EXTERN NSString * _Nonnull const JPVideoPlayerDownloadFinishNotification;

#define JPDEPRECATED_ATTRIBUTE(msg) __attribute__((deprecated(msg)));

#endif

