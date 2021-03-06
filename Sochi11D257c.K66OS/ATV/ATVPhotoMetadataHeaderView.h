/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRPanelControl, NSArray;

__attribute__((visibility("hidden")))
@interface ATVPhotoMetadataHeaderView : BRControl {
	BOOL _shouldDisplayContributorLine;	// 84 = 0x54
	BOOL _displayDisabled;	// 85 = 0x55
	NSArray *_photoBadgeViews;	// 88 = 0x58
	BRControl *_actionsView;	// 92 = 0x5c
	BRControl *_contributorLineView;	// 96 = 0x60
	XXStruct_qlg9jA _preferredHeight;	// 100 = 0x64
	XXStruct_qlg9jA _preferredContributorLineHeight;	// 104 = 0x68
	XXStruct_qlg9jA _contributorLineHorizontalMargin;	// 108 = 0x6c
	BRPanelControl *_badgesPanel;	// 112 = 0x70
	XXStruct_40SSZC _imageRenderSize;	// 116 = 0x74
}
@property(retain, nonatomic) BRControl *actionsView;	// G=0xcf935; S=0xcf031; @synthesize=_actionsView
@property(retain, nonatomic) BRPanelControl *badgesPanel;	// G=0xcf9e9; S=0xcf9f9; @synthesize=_badgesPanel
@property(assign, nonatomic) XXStruct_qlg9jA contributorLineHorizontalMargin;	// G=0xcf9ad; S=0xcf9c9; @synthesize=_contributorLineHorizontalMargin
@property(retain, nonatomic) BRControl *contributorLineView;	// G=0xcf945; S=0xcf0d1; @synthesize=_contributorLineView
@property(assign, nonatomic) BOOL displayDisabled;	// G=0xcf9d9; S=0xcec51; @synthesize=_displayDisabled
@property(assign, nonatomic) XXStruct_40SSZC imageRenderSize;	// G=0xcf90d; S=0xcec01; @synthesize=_imageRenderSize
@property(retain, nonatomic) NSArray *photoBadgeViews;	// G=0xcf925; S=0xcedf9; @synthesize=_photoBadgeViews
@property(assign, nonatomic) XXStruct_qlg9jA preferredContributorLineHeight;	// G=0xcf981; S=0xcf99d; @synthesize=_preferredContributorLineHeight
@property(assign, nonatomic) XXStruct_qlg9jA preferredHeight;	// G=0xcf955; S=0xcf971; @synthesize=_preferredHeight
@property(assign, nonatomic) BOOL shouldDisplayContributorLine;	// G=0xcf8fd; S=0xceb09; @synthesize=_shouldDisplayContributorLine
- (id)init;	// 0xcea51
- (void).cxx_destruct;	// 0xcfa21
// declared property getter: - (id)actionsView;	// 0xcf935
// declared property getter: - (id)badgesPanel;	// 0xcf9e9
// declared property getter: - (XXStruct_qlg9jA)contributorLineHorizontalMargin;	// 0xcf9ad
// declared property getter: - (id)contributorLineView;	// 0xcf945
// declared property getter: - (BOOL)displayDisabled;	// 0xcf9d9
// declared property getter: - (XXStruct_40SSZC)imageRenderSize;	// 0xcf90d
- (void)layoutSubcontrols;	// 0xcf38d
// declared property getter: - (id)photoBadgeViews;	// 0xcf925
// declared property getter: - (XXStruct_qlg9jA)preferredContributorLineHeight;	// 0xcf981
// declared property getter: - (XXStruct_qlg9jA)preferredHeight;	// 0xcf955
// declared property setter: - (void)setActionsView:(id)view;	// 0xcf031
// declared property setter: - (void)setBadgesPanel:(id)panel;	// 0xcf9f9
// declared property setter: - (void)setContributorLineHorizontalMargin:(XXStruct_qlg9jA)margin;	// 0xcf9c9
// declared property setter: - (void)setContributorLineView:(id)view;	// 0xcf0d1
// declared property setter: - (void)setDisplayDisabled:(BOOL)disabled;	// 0xcec51
// declared property setter: - (void)setImageRenderSize:(XXStruct_40SSZC)size;	// 0xcec01
// declared property setter: - (void)setPhotoBadgeViews:(id)views;	// 0xcedf9
// declared property setter: - (void)setPreferredContributorLineHeight:(XXStruct_qlg9jA)height;	// 0xcf99d
// declared property setter: - (void)setPreferredHeight:(XXStruct_qlg9jA)height;	// 0xcf971
// declared property setter: - (void)setShouldDisplayContributorLine:(BOOL)displayContributorLine;	// 0xceb09
// declared property getter: - (BOOL)shouldDisplayContributorLine;	// 0xcf8fd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xcf189
@end

