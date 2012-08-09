/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSDateFormatter, NSAttributedString;

__attribute__((visibility("hidden")))
@interface ATVPhotoBatchDescriptionView : BRControl {
	NSDateFormatter *_dayMonthFormatter;	// 80 = 0x50
	NSAttributedString *_title;	// 84 = 0x54
	NSAttributedString *_boldTitle;	// 88 = 0x58
	NSAttributedString *_dimmedTitle;	// 92 = 0x5c
	NSDateFormatter *_dayMonthYearFormatter;	// 96 = 0x60
}
@property(retain, nonatomic) NSAttributedString *boldTitle;	// G=0x3a99fd; S=0x3a9a0d; @synthesize=_boldTitle
@property(retain, nonatomic) NSDateFormatter *dayMonthFormatter;	// G=0x3a9885; S=0x3a999d; @synthesize=_dayMonthFormatter
@property(retain, nonatomic) NSDateFormatter *dayMonthYearFormatter;	// G=0x3a9911; S=0x3a9a6d; @synthesize=_dayMonthYearFormatter
@property(retain, nonatomic) NSAttributedString *dimmedTitle;	// G=0x3a9a35; S=0x3a9a45; @synthesize=_dimmedTitle
@property(retain, nonatomic) NSAttributedString *title;	// G=0x3a99c5; S=0x3a99d5; @synthesize=_title
- (id)init;	// 0x3a8a81
- (void).cxx_destruct;	// 0x3a9a95
- (id)_boldTitleAttributes;	// 0x3a97dd
- (id)_dimmedTitleAttributes;	// 0x3a9825
- (id)_titleAttributes;	// 0x3a9795
// declared property getter: - (id)boldTitle;	// 0x3a99fd
// declared property getter: - (id)dayMonthFormatter;	// 0x3a9885
// declared property getter: - (id)dayMonthYearFormatter;	// 0x3a9911
// declared property getter: - (id)dimmedTitle;	// 0x3a9a35
- (void)drawRect:(CGRect)rect;	// 0x3a94ed
// declared property setter: - (void)setBoldTitle:(id)title;	// 0x3a9a0d
// declared property setter: - (void)setDayMonthFormatter:(id)formatter;	// 0x3a999d
// declared property setter: - (void)setDayMonthYearFormatter:(id)formatter;	// 0x3a9a6d
// declared property setter: - (void)setDimmedTitle:(id)title;	// 0x3a9a45
// declared property setter: - (void)setTitle:(id)title;	// 0x3a99d5
- (void)setTitle:(id)title boldTitle:(id)title2 dimmedTitle:(id)title3;	// 0x3a90f1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3a937d
// declared property getter: - (id)title;	// 0x3a99c5
- (void)updatePhotoCount:(int)count description:(id)description;	// 0x3a8ad1
- (void)updatePhotoCount:(int)count modifiedDate:(id)date;	// 0x3a8cc5
@end
