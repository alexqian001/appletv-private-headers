/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface ATVPhotoMetadataCommentView : BRControl {
	BOOL _displayDisabled;	// 84 = 0x54
	BRControl *_commentsView;	// 88 = 0x58
}
@property(retain, nonatomic) BRControl *commentsView;	// G=0xcfd25; S=0xcfb75; @synthesize=_commentsView
@property(assign, nonatomic) BOOL displayDisabled;	// G=0xcfd35; S=0xcfad9; @synthesize=_displayDisabled
- (id)init;	// 0xcfa7d
- (void).cxx_destruct;	// 0xcfd45
- (BOOL)brEventAction:(id)action;	// 0xcfcd5
// declared property getter: - (id)commentsView;	// 0xcfd25
// declared property getter: - (BOOL)displayDisabled;	// 0xcfd35
- (void)layoutSubcontrols;	// 0xcfc15
// declared property setter: - (void)setCommentsView:(id)view;	// 0xcfb75
// declared property setter: - (void)setDisplayDisabled:(BOOL)disabled;	// 0xcfad9
@end
