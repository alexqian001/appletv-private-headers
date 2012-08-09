/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask {
	int _overwrite;	// 136 = 0x88
	NSURL *_destinationURL;	// 140 = 0x8c
}
@property(retain) NSURL *destinationURL;	// G=0x30490bd9; S=0x30490bed; @synthesize=_destinationURL
@property(assign) int overwrite;	// G=0x30490bad; S=0x30490bc1; @synthesize=_overwrite
+ (id)stringFromOverwriteValue:(int)overwriteValue;	// 0x30490b71
- (id)initWithSourceURL:(id)sourceURL destinationURL:(id)url;	// 0x30490591
- (id)initWithSourceURL:(id)sourceURL destinationURL:(id)url andOverwrite:(int)overwrite;	// 0x304905b5
- (id)initWithURL:(id)url;	// 0x3049058d
- (void)_callBackToDelegateWithResponses:(id)responses error:(id)error;	// 0x30490b6d
- (id)additionalHeaderValues;	// 0x304908cd
- (void)dealloc;	// 0x30490721
- (id)description;	// 0x3049076d
// declared property getter: - (id)destinationURL;	// 0x30490bd9
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x304909fd
// declared property getter: - (int)overwrite;	// 0x30490bad
- (id)requestBody;	// 0x304908c9
// declared property setter: - (void)setDestinationURL:(id)url;	// 0x30490bed
// declared property setter: - (void)setOverwrite:(int)overwrite;	// 0x30490bc1
@end
