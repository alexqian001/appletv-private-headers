/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSStreamsProtocolDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString, MSBackoffManager;

@interface MSCupidStateMachine : NSObject <MSStreamsProtocolDelegate> {
@private
	NSString *_personID;	// 4 = 0x4
	NSString *_manifestPath;	// 8 = 0x8
	NSMutableDictionary *_userManifest;	// 12 = 0xc
	MSBackoffManager *_streamsBackoffManager;	// 16 = 0x10
	MSBackoffManager *_MMCSBackoffManager;	// 20 = 0x14
}
@property(retain, nonatomic) NSMutableDictionary *_userManifest;	// G=0x339ac7c9; S=0x339ac7d9; @synthesize
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x339ac801; @synthesize=_personID
- (id)initWithPersonID:(id)personID;	// 0x339ab9dd
- (void).cxx_destruct;	// 0x339ac811
- (void)_abort;	// 0x339ac765
- (void)_backoffMMCSBackoffTimer;	// 0x339ac419
- (void)_backoffStreamsBackoffTimer;	// 0x339ac075
- (void)_commitUserManifest;	// 0x339abec1
- (void)_didReceiveMMCSRetryAfterDate:(id)date;	// 0x339ac5a5
- (void)_didReceiveStreamsRetryAfterDate:(id)date;	// 0x339ac201
- (void)_forget;	// 0x339ac78d
- (id)_latestNextActivityDate;	// 0x339ac6b9
- (void)_resetMMCSBackoffTimer;	// 0x339ac315
- (void)_resetStreamsBackoffTimer;	// 0x339abf71
- (void)_updateMasterManifest;	// 0x339ac73d
// declared property getter: - (id)_userManifest;	// 0x339ac7c9
- (void)deactivate;	// 0x339abdfd
- (void)dealloc;	// 0x339abdbd
- (void)forget;	// 0x339abe6d
// declared property getter: - (id)personID;	// 0x339ac801
- (void)protocol:(id)protocol didReceiveRetryAfterDate:(id)date;	// 0x339ac7b5
// declared property setter: - (void)set_userManifest:(id)manifest;	// 0x339ac7d9
@end
