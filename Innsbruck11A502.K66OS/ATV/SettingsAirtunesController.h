/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextFieldDelegate.h"
#import "BRViewController.h"

@class BRTextEntryController, NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface SettingsAirtunesController : BRViewController <BRTextFieldDelegate> {
	NSDictionary *_selectedSpeakerInfo;	// 104 = 0x68
	BOOL _selectedSpeakerIsConnecting;	// 108 = 0x6c
	BRTextEntryController *_localPasswordEntryController;	// 112 = 0x70
	NSArray *_sortedSpeakers;	// 116 = 0x74
	BOOL _speakersEnabled;	// 120 = 0x78
}
- (id)init;	// 0x2f86f9
- (void).cxx_destruct;	// 0x2f9419
- (void)_CRDPreferenceChanged:(id)changed;	// 0x2fa7d9
- (void)_handleSecurityItemSelectedForRow:(long)row;	// 0x2f9fb1
- (void)_handleSettingsItemSelectedForRow:(long)row;	// 0x2f9bdd
- (void)_handleSpeakerItemSelectedForRow:(long)row;	// 0x2fa339
- (id)_newLocalPasswordEntryControllerWithIdentifier:(id)identifier;	// 0x2fa481
- (void)_reloadAirPlaySpeakers:(id)speakers;	// 0x2fa5b5
- (id)_securityItemForRow:(long)row;	// 0x2f9771
- (id)_settingsItemForRow:(long)row;	// 0x2f9461
- (void)_sortListOfAirPlaySpeakers;	// 0x2fa625
- (id)_speakerItemForRow:(long)row;	// 0x2f991d
- (void)_speakerSelectionWasCanceled:(id)canceled;	// 0x2fa771
- (void)_speakerWasSelected:(id)selected;	// 0x2fa709
- (void)_speakerWillBeSelected:(id)_speaker;	// 0x2fa6a1
- (void)dealloc;	// 0x2f8aad
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2f8bc1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2f9149
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2f8b19
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2f8fbd
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2f90ad
- (long)numberOfSectionsInList:(id)list;	// 0x2f8fa5
- (void)textDidChange:(id)text;	// 0x2f91d5
- (void)textDidEndEditing:(id)text;	// 0x2f91d9
@end
