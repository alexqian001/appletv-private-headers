/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation {
	ISOpenURLRequest *_request;	// 60 = 0x3c
}
@property(readonly, assign) ISOpenURLRequest *openURLRequest;	// G=0x307864d1; 
- (id)init;	// 0x30786379
- (id)initWithOpenURLRequest:(id)openURLRequest;	// 0x3078638d
- (id)_newSortedTargetsArray;	// 0x30786875
- (BOOL)_openURL:(id)url;	// 0x30786949
- (void)dealloc;	// 0x30786485
// declared property getter: - (id)openURLRequest;	// 0x307864d1
- (void)run;	// 0x30786509
@end
