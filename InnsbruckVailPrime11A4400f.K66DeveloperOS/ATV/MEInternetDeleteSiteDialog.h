/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BROptionDialog.h"

@class ATVAddSiteEntry;

__attribute__((visibility("hidden")))
@interface MEInternetDeleteSiteDialog : BROptionDialog {
	ATVAddSiteEntry *_siteEntry;	// 168 = 0xa8
}
@property(retain) ATVAddSiteEntry *siteEntry;	// G=0x16cded; S=0x16ce01; @synthesize=_siteEntry
- (id)initWithSiteInfo:(id)siteInfo;	// 0x16cbb1
- (void).cxx_destruct;	// 0x16ce11
- (void)_deleteSite;	// 0x16cd71
- (void)_warningForActionResponse:(id)actionResponse;	// 0x16cd09
// declared property setter: - (void)setSiteEntry:(id)entry;	// 0x16ce01
// declared property getter: - (id)siteEntry;	// 0x16cded
@end
