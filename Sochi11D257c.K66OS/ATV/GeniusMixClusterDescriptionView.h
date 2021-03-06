/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class NSString, BRMarqueeTextControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface GeniusMixClusterDescriptionView : BRControl {
	BRTextControl *_clusterNameControl;	// 84 = 0x54
	BRTextControl *_basedOnLabelControl;	// 88 = 0x58
	BRMarqueeTextControl *_basedOnTextControl;	// 92 = 0x5c
}
@property(copy, nonatomic) NSString *basedOnText;	// G=0x1bb9ed; S=0x1bba25; 
@property(copy, nonatomic) NSString *clusterName;	// G=0x1bb9b5; S=0x1bb945; 
- (id)init;	// 0x1bb785
// declared property getter: - (id)basedOnText;	// 0x1bb9ed
// declared property getter: - (id)clusterName;	// 0x1bb9b5
- (void)dealloc;	// 0x1bb8cd
- (void)layoutSubcontrols;	// 0x1bba95
// declared property setter: - (void)setBasedOnText:(id)text;	// 0x1bba25
// declared property setter: - (void)setClusterName:(id)name;	// 0x1bb945
@end

