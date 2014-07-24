/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AVMediaSelectionOption;

__attribute__((visibility("hidden")))
@interface ATVSubtitleOption : XXUnknownSuperclass {
	AVMediaSelectionOption *_avMediaSelectionOption;	// 4 = 0x4
}
@property(retain, nonatomic) AVMediaSelectionOption *avMediaSelectionOption;	// G=0x22c759; S=0x22c769; @synthesize=_avMediaSelectionOption
+ (id)autoSubtitleOption;	// 0x22c175
+ (id)offSubtitleOption;	// 0x22c0e9
+ (id)offSubtitleOptionWithAVMediaSelectionOption:(id)avmediaSelectionOption;	// 0x22c125
- (id)initWithAVMediaSelectionOption:(id)avmediaSelectionOption;	// 0x22c1b1
- (void).cxx_destruct;	// 0x22c791
// declared property getter: - (id)avMediaSelectionOption;	// 0x22c759
- (BOOL)containsOnlyForcedSubtitles;	// 0x22c5ed
- (id)description;	// 0x22c711
- (BOOL)isEqual:(id)equal;	// 0x22c211
- (BOOL)isMainProgramContent;	// 0x22c5a5
- (id)languageCode;	// 0x22c35d
- (id)languageCodeBCP47;	// 0x22c409
- (id)localizedDisplayString;	// 0x22c55d
- (id)name;	// 0x22c455
- (void)saveToDiskForMediaAsset:(id)mediaAsset;	// 0x22c2c1
// declared property setter: - (void)setAvMediaSelectionOption:(id)option;	// 0x22c769
- (int)subtitleType;	// 0x22c635
@end
