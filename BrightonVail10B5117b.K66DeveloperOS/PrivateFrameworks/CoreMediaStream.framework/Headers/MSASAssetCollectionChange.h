/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MSASAssetCollectionChange : NSObject {
	NSString *_GUID;	// 4 = 0x4
	NSString *_ctag;	// 8 = 0x8
	BOOL _wasDeleted;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *GUID;	// G=0x3395cb75; S=0x3395cb85; @synthesize=_GUID
@property(retain, nonatomic) NSString *ctag;	// G=0x3395cbad; S=0x3395cbbd; @synthesize=_ctag
@property(assign, nonatomic) BOOL wasDeleted;	// G=0x3395cbe5; S=0x3395cbf5; @synthesize=_wasDeleted
- (void).cxx_destruct;	// 0x3395cc05
// declared property getter: - (id)GUID;	// 0x3395cb75
// declared property getter: - (id)ctag;	// 0x3395cbad
- (id)description;	// 0x3395caa1
// declared property setter: - (void)setCtag:(id)ctag;	// 0x3395cbbd
// declared property setter: - (void)setGUID:(id)guid;	// 0x3395cb85
// declared property setter: - (void)setWasDeleted:(BOOL)deleted;	// 0x3395cbf5
// declared property getter: - (BOOL)wasDeleted;	// 0x3395cbe5
@end

