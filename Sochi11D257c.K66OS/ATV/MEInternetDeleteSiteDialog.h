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
@property(retain) ATVAddSiteEntry *siteEntry;	// G=0x198a19; S=0x198a2d; @synthesize=_siteEntry
- (id)initWithSiteInfo:(id)siteInfo;	// 0x1987dd
- (void).cxx_destruct;	// 0x198a3d
- (void)_deleteSite;	// 0x19899d
- (void)_warningForActionResponse:(id)actionResponse;	// 0x198935
// declared property setter: - (void)setSiteEntry:(id)entry;	// 0x198a2d
// declared property getter: - (id)siteEntry;	// 0x198a19
@end
