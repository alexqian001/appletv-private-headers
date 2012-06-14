/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSString, NSMutableArray, MPMediaQuery;

@interface MPMediaQueryLogProxy : NSObject {
@private
	MPMediaQuery *_target;	// 4 = 0x4
	MPMediaQuery *_baseObject;	// 8 = 0x8
	NSMutableArray *_loggedInvocations;	// 12 = 0xc
	NSString *_filePath;	// 16 = 0x10
}
- (id)initWithTarget:(id)target;	// 0x34862009
- (id)copyWithZone:(NSZone *)zone;	// 0x34862175
- (void)createFilePath;	// 0x34862599
- (void)dealloc;	// 0x348620c5
- (void)flushLog;	// 0x3486287d
- (void)forwardInvocation:(id)invocation;	// 0x348621a5
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3486253d
- (id)replacementObjectForCoder:(id)coder;	// 0x34862195
- (void)writeLog;	// 0x348626b9
@end
