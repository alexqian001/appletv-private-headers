/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVSedonaMediaAPIHelper : BRSingleton {
	NSMutableArray *_queue;	// 4 = 0x4
	id _currentRequest;	// 8 = 0x8
	int _state;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x250669
+ (id)singleton;	// 0x250659
- (id)init;	// 0x25068d
- (void).cxx_destruct;	// 0x250cd5
- (void)_handleCloseRequest;	// 0x250c49
- (void)_handleNextRequest;	// 0x250955
- (void)_handleOpenRequest;	// 0x250a69
- (void)_mediaCloseFinished:(id)finished;	// 0x250cb5
- (void)_mediaOpenFinished:(id)finished;	// 0x250ba9
- (void)_queueRequest:(id)request;	// 0x250905
- (void)mediaClose;	// 0x2508b1
- (void)mediaOpenURL:(id)url params:(id)params openFinishedHandler:(id)handler;	// 0x2507e9
@end

