/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRCursorControl, NSString, BRTextControl, BRHorizontalDividerControl, BRMediaShelfView, BRMetadataTitleControl, BRTableView, BRCoverArtPreviewControl;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVItemDetailView : BRControl {
	BRCoverArtPreviewControl *_mainImageControl;	// 80 = 0x50
	BRHorizontalDividerControl *_summaryTopDivider;	// 84 = 0x54
	BRHorizontalDividerControl *_summaryBottomDivider;	// 88 = 0x58
	BRTextControl *_mainImageTextControl;	// 92 = 0x5c
	BRTextControl *_summaryControl;	// 96 = 0x60
	BRCursorControl *_cursor;	// 100 = 0x64
	int _mainImageStyle;	// 104 = 0x68
	int _displayMode;	// 108 = 0x6c
	BRTableView *_table;	// 112 = 0x70
	BRMediaShelfView *_centerShelf;	// 116 = 0x74
	BRControl *_divider;	// 120 = 0x78
	BRMediaShelfView *_bottomShelf;	// 124 = 0x7c
	BRMetadataTitleControl *_titleControl;	// 128 = 0x80
}
@property(retain, nonatomic) BRMediaShelfView *bottomShelf;	// G=0x10bd29; S=0x10b135; @synthesize=_bottomShelf
@property(retain, nonatomic) BRMediaShelfView *centerShelf;	// G=0x10bd09; S=0x10b0a5; @synthesize=_centerShelf
@property(assign, nonatomic) int displayMode;	// G=0x10bcd9; S=0x10bce9; @synthesize=_displayMode
@property(retain, nonatomic) BRControl *divider;	// G=0x10bd19; S=0x10b1b5; @synthesize=_divider
@property(retain, nonatomic) id<BRImageProxy> mainImageProxy;	// G=0x10b06d; S=0x10b04d; @dynamic
@property(assign, nonatomic) int mainImageStyle;	// G=0x10bcb9; S=0x10bcc9; @synthesize=_mainImageStyle
@property(retain, nonatomic) NSString *mainImageText;	// G=0x10b291; S=0x10b235; @dynamic
@property(readonly, assign, nonatomic) float metadataWidth;	// G=0x10b36d; @dynamic
@property(retain, nonatomic) NSString *summary;	// G=0x10b335; S=0x10b2c9; @dynamic
@property(readonly, assign, nonatomic) BRTableView *table;	// G=0x10bcf9; @synthesize=_table
@property(readonly, assign, nonatomic) BRMetadataTitleControl *titleControl;	// G=0x10bd39; @synthesize=_titleControl
- (id)init;	// 0x10ad41
- (id)accessibilityLabel;	// 0x10bc51
// declared property getter: - (id)bottomShelf;	// 0x10bd29
- (BOOL)brEventAction:(id)action;	// 0x10b3a5
// declared property getter: - (id)centerShelf;	// 0x10bd09
- (void)dealloc;	// 0x10af35
// declared property getter: - (int)displayMode;	// 0x10bcd9
// declared property getter: - (id)divider;	// 0x10bd19
- (void)layoutSubcontrols;	// 0x10b4d1
// declared property getter: - (id)mainImageProxy;	// 0x10b06d
// declared property getter: - (int)mainImageStyle;	// 0x10bcb9
// declared property getter: - (id)mainImageText;	// 0x10b291
// declared property getter: - (float)metadataWidth;	// 0x10b36d
// declared property setter: - (void)setBottomShelf:(id)shelf;	// 0x10b135
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x10b0a5
// declared property setter: - (void)setDisplayMode:(int)mode;	// 0x10bce9
// declared property setter: - (void)setDivider:(id)divider;	// 0x10b1b5
// declared property setter: - (void)setMainImageProxy:(id)proxy;	// 0x10b04d
// declared property setter: - (void)setMainImageStyle:(int)style;	// 0x10bcc9
// declared property setter: - (void)setMainImageText:(id)text;	// 0x10b235
// declared property setter: - (void)setSummary:(id)summary;	// 0x10b2c9
// declared property getter: - (id)summary;	// 0x10b335
// declared property getter: - (id)table;	// 0x10bcf9
// declared property getter: - (id)titleControl;	// 0x10bd39
@end

