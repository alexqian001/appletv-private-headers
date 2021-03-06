/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library

@class NSNumber, NSString, NSSet;

@interface BBSectionSubtypeParameters : NSObject {
	BBSectionSubtypeParameters *_fallbackParameters;	// 4 = 0x4
	NSString *_topic;	// 8 = 0x8
	NSString *_missedBannerDescriptionFormat;	// 12 = 0xc
	NSString *_fullUnlockActionLabel;	// 16 = 0x10
	NSString *_unlockActionLabel;	// 20 = 0x14
	NSSet *_alertSuppressionAppIDs;	// 24 = 0x18
	NSNumber *_boxedCoalescesWhenLocked;	// 28 = 0x1c
	NSNumber *_boxedSuppressesMessageForPrivacy;	// 32 = 0x20
	NSNumber *_boxedRealertCount;	// 36 = 0x24
	NSNumber *_boxedInertWhenLocked;	// 40 = 0x28
	NSNumber *_boxedPreservesUnlockActionCase;	// 44 = 0x2c
	NSNumber *_boxedBannerShowsSubtitle;	// 48 = 0x30
	NSNumber *_boxedVisuallyIndicatesWhenDateIsInFuture;	// 52 = 0x34
	NSNumber *_boxedSubtypePriority;	// 56 = 0x38
	NSNumber *_boxedIPodOutAlertType;	// 60 = 0x3c
}
@property(copy, nonatomic) NSSet *alertSuppressionAppIDs;	// G=0x370dad05; S=0x370db745; @synthesize=_alertSuppressionAppIDs
@property(assign, nonatomic) BOOL bannerShowsSubtitle;	// G=0x370dae89; S=0x370db0bd; 
@property(retain, nonatomic) NSNumber *boxedBannerShowsSubtitle;	// G=0x370db7f5; S=0x370db805; @synthesize=_boxedBannerShowsSubtitle
@property(retain, nonatomic) NSNumber *boxedCoalescesWhenLocked;	// G=0x370db755; S=0x370db765; @synthesize=_boxedCoalescesWhenLocked
@property(retain, nonatomic) NSNumber *boxedIPodOutAlertType;	// G=0x370db855; S=0x370db865; @synthesize=_boxedIPodOutAlertType
@property(retain, nonatomic) NSNumber *boxedInertWhenLocked;	// G=0x370db7b5; S=0x370db7c5; @synthesize=_boxedInertWhenLocked
@property(retain, nonatomic) NSNumber *boxedPreservesUnlockActionCase;	// G=0x370db7d5; S=0x370db7e5; @synthesize=_boxedPreservesUnlockActionCase
@property(retain, nonatomic) NSNumber *boxedRealertCount;	// G=0x370db795; S=0x370db7a5; @synthesize=_boxedRealertCount
@property(retain, nonatomic) NSNumber *boxedSubtypePriority;	// G=0x370db835; S=0x370db845; @synthesize=_boxedSubtypePriority
@property(retain, nonatomic) NSNumber *boxedSuppressesMessageForPrivacy;	// G=0x370db775; S=0x370db785; @synthesize=_boxedSuppressesMessageForPrivacy
@property(retain, nonatomic) NSNumber *boxedVisuallyIndicatesWhenDateIsInFuture;	// G=0x370db815; S=0x370db825; @synthesize=_boxedVisuallyIndicatesWhenDateIsInFuture
@property(assign, nonatomic) BOOL coalescesWhenLocked;	// G=0x370dad39; S=0x370daf91; 
@property(assign, nonatomic) BBSectionSubtypeParameters *fallbackParameters;	// G=0x370db6e5; S=0x370db6f5; @synthesize=_fallbackParameters
@property(copy, nonatomic) NSString *fullUnlockActionLabel;	// G=0x370dac9d; S=0x370db725; @synthesize=_fullUnlockActionLabel
@property(assign, nonatomic) int iPodOutAlertType;	// G=0x370daf51; S=0x370db171; 
@property(assign, nonatomic) BOOL inertWhenLocked;	// G=0x370dae01; S=0x370db045; 
@property(copy, nonatomic) NSString *missedBannerDescriptionFormat;	// G=0x370dac69; S=0x370db715; @synthesize=_missedBannerDescriptionFormat
@property(assign, nonatomic) BOOL preservesUnlockActionCase;	// G=0x370dae45; S=0x370db081; 
@property(assign, nonatomic) unsigned realertCount;	// G=0x370dadc1; S=0x370db009; 
@property(assign, nonatomic) unsigned subtypePriority;	// G=0x370daf11; S=0x370db135; 
@property(assign, nonatomic) BOOL suppressesMessageForPrivacy;	// G=0x370dad7d; S=0x370dafcd; 
@property(copy, nonatomic) NSString *topic;	// G=0x370dac35; S=0x370db705; @synthesize=_topic
@property(copy, nonatomic) NSString *unlockActionLabel;	// G=0x370dacd1; S=0x370db735; @synthesize=_unlockActionLabel
@property(assign, nonatomic) BOOL visuallyIndicatesWhenDateIsInFuture;	// G=0x370daecd; S=0x370db0f9; 
- (id)initWithCoder:(id)coder;	// 0x370db1ad
- (id)initWithFallbackParameters:(id)fallbackParameters;	// 0x370daa99
// declared property getter: - (id)alertSuppressionAppIDs;	// 0x370dad05
// declared property getter: - (BOOL)bannerShowsSubtitle;	// 0x370dae89
// declared property getter: - (id)boxedBannerShowsSubtitle;	// 0x370db7f5
// declared property getter: - (id)boxedCoalescesWhenLocked;	// 0x370db755
// declared property getter: - (id)boxedIPodOutAlertType;	// 0x370db855
// declared property getter: - (id)boxedInertWhenLocked;	// 0x370db7b5
// declared property getter: - (id)boxedPreservesUnlockActionCase;	// 0x370db7d5
// declared property getter: - (id)boxedRealertCount;	// 0x370db795
// declared property getter: - (id)boxedSubtypePriority;	// 0x370db835
// declared property getter: - (id)boxedSuppressesMessageForPrivacy;	// 0x370db775
// declared property getter: - (id)boxedVisuallyIndicatesWhenDateIsInFuture;	// 0x370db815
// declared property getter: - (BOOL)coalescesWhenLocked;	// 0x370dad39
- (void)dealloc;	// 0x370daae1
- (void)encodeWithCoder:(id)coder;	// 0x370db489
// declared property getter: - (id)fallbackParameters;	// 0x370db6e5
// declared property getter: - (id)fullUnlockActionLabel;	// 0x370dac9d
// declared property getter: - (int)iPodOutAlertType;	// 0x370daf51
// declared property getter: - (BOOL)inertWhenLocked;	// 0x370dae01
// declared property getter: - (id)missedBannerDescriptionFormat;	// 0x370dac69
// declared property getter: - (BOOL)preservesUnlockActionCase;	// 0x370dae45
// declared property getter: - (unsigned)realertCount;	// 0x370dadc1
// declared property setter: - (void)setAlertSuppressionAppIDs:(id)ids;	// 0x370db745
// declared property setter: - (void)setBannerShowsSubtitle:(BOOL)subtitle;	// 0x370db0bd
// declared property setter: - (void)setBoxedBannerShowsSubtitle:(id)subtitle;	// 0x370db805
// declared property setter: - (void)setBoxedCoalescesWhenLocked:(id)locked;	// 0x370db765
// declared property setter: - (void)setBoxedIPodOutAlertType:(id)type;	// 0x370db865
// declared property setter: - (void)setBoxedInertWhenLocked:(id)locked;	// 0x370db7c5
// declared property setter: - (void)setBoxedPreservesUnlockActionCase:(id)aCase;	// 0x370db7e5
// declared property setter: - (void)setBoxedRealertCount:(id)count;	// 0x370db7a5
// declared property setter: - (void)setBoxedSubtypePriority:(id)priority;	// 0x370db845
// declared property setter: - (void)setBoxedSuppressesMessageForPrivacy:(id)privacy;	// 0x370db785
// declared property setter: - (void)setBoxedVisuallyIndicatesWhenDateIsInFuture:(id)future;	// 0x370db825
// declared property setter: - (void)setCoalescesWhenLocked:(BOOL)locked;	// 0x370daf91
// declared property setter: - (void)setFallbackParameters:(id)parameters;	// 0x370db6f5
// declared property setter: - (void)setFullUnlockActionLabel:(id)label;	// 0x370db725
// declared property setter: - (void)setIPodOutAlertType:(int)type;	// 0x370db171
// declared property setter: - (void)setInertWhenLocked:(BOOL)locked;	// 0x370db045
// declared property setter: - (void)setMissedBannerDescriptionFormat:(id)format;	// 0x370db715
// declared property setter: - (void)setPreservesUnlockActionCase:(BOOL)aCase;	// 0x370db081
// declared property setter: - (void)setRealertCount:(unsigned)count;	// 0x370db009
// declared property setter: - (void)setSubtypePriority:(unsigned)priority;	// 0x370db135
// declared property setter: - (void)setSuppressesMessageForPrivacy:(BOOL)privacy;	// 0x370dafcd
// declared property setter: - (void)setTopic:(id)topic;	// 0x370db705
// declared property setter: - (void)setUnlockActionLabel:(id)label;	// 0x370db735
// declared property setter: - (void)setVisuallyIndicatesWhenDateIsInFuture:(BOOL)future;	// 0x370db0f9
// declared property getter: - (unsigned)subtypePriority;	// 0x370daf11
// declared property getter: - (BOOL)suppressesMessageForPrivacy;	// 0x370dad7d
// declared property getter: - (id)topic;	// 0x370dac35
// declared property getter: - (id)unlockActionLabel;	// 0x370dacd1
// declared property getter: - (BOOL)visuallyIndicatesWhenDateIsInFuture;	// 0x370daecd
@end

