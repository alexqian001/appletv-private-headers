/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

@interface SBUISound : NSObject {
	int _soundType;	// 4 = 0x4
	unsigned long _systemSoundID;	// 8 = 0x8
	unsigned _soundBehavior;	// 12 = 0xc
	NSString *_ringtoneName;	// 16 = 0x10
	NSDictionary *_vibrationPattern;	// 20 = 0x14
	NSString *_audioCategory;	// 24 = 0x18
	BOOL _repeats;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *audioCategory;	// G=0x35712245; S=0x35712255; @synthesize=_audioCategory
@property(assign, nonatomic, getter=isRepeating) BOOL repeats;	// G=0x35712205; S=0x35712215; @synthesize=_repeats
@property(retain, nonatomic) NSString *ringtoneName;	// G=0x357121e5; S=0x357121f5; @synthesize=_ringtoneName
@property(assign, nonatomic) unsigned soundBehavior;	// G=0x35712225; S=0x35712235; @synthesize=_soundBehavior
@property(assign, nonatomic) int soundType;	// G=0x35712185; S=0x35712195; @synthesize=_soundType
@property(assign, nonatomic) unsigned long systemSoundID;	// G=0x357121a5; S=0x357121b5; @synthesize=_systemSoundID
@property(retain, nonatomic) NSDictionary *vibrationPattern;	// G=0x357121c5; S=0x357121d5; @synthesize=_vibrationPattern
+ (id)alertSoundWithSystemSoundID:(unsigned long)systemSoundID;	// 0x35711d29
- (id)initWithRingtone:(id)ringtone vibrationPattern:(id)pattern repeats:(BOOL)repeats audioCategory:(id)category;	// 0x35711e21
- (id)initWithSystemSoundID:(unsigned long)systemSoundID behavior:(unsigned)behavior;	// 0x35711d69
- (id)initWithSystemSoundID:(unsigned long)systemSoundID behavior:(unsigned)behavior vibrationPattern:(id)pattern;	// 0x35711d8d
// declared property getter: - (id)audioCategory;	// 0x35712245
- (void)dealloc;	// 0x35711ecd
- (id)description;	// 0x35712001
- (BOOL)isPlaying;	// 0x35711f39
// declared property getter: - (BOOL)isRepeating;	// 0x35712205
- (BOOL)play;	// 0x35711f71
- (BOOL)playWithCompletionHandler:(id)completionHandler;	// 0x35711f89
// declared property getter: - (id)ringtoneName;	// 0x357121e5
// declared property setter: - (void)setAudioCategory:(id)category;	// 0x35712255
// declared property setter: - (void)setRepeats:(BOOL)repeats;	// 0x35712215
// declared property setter: - (void)setRingtoneName:(id)name;	// 0x357121f5
// declared property setter: - (void)setSoundBehavior:(unsigned)behavior;	// 0x35712235
// declared property setter: - (void)setSoundType:(int)type;	// 0x35712195
// declared property setter: - (void)setSystemSoundID:(unsigned long)anId;	// 0x357121b5
// declared property setter: - (void)setVibrationPattern:(id)pattern;	// 0x357121d5
// declared property getter: - (unsigned)soundBehavior;	// 0x35712225
// declared property getter: - (int)soundType;	// 0x35712185
- (void)stop;	// 0x35711fc5
// declared property getter: - (unsigned long)systemSoundID;	// 0x357121a5
// declared property getter: - (id)vibrationPattern;	// 0x357121c5
@end
