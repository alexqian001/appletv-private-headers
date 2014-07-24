/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVRadioUtilites : XXUnknownSuperclass {
}
+ (void)_completePasscodePromptForController:(id)controller successfully:(BOOL)successfully;	// 0x117eb5
+ (id)_dialogIdentifierForType:(unsigned)type;	// 0x11b115
+ (BOOL)_isRadioScheme:(id)scheme;	// 0x1198b9
+ (BOOL)_isStationsURL:(id)url;	// 0x119975
+ (void)_obtainApprovalIfNeededForPlayingStation:(id)playingStation withCompletionHandler:(id)completionHandler;	// 0x1181c1
+ (void)_passcodeEntryCanceled:(id)canceled;	// 0x117fe1
+ (void)_passcodeSuccessfullyEntered:(id)entered;	// 0x117fa1
+ (void)_playbackMyStation:(id)station initialTracks:(id)tracks delay:(BOOL)delay;	// 0x1199bd
+ (void)_playbackStoreStation:(id)station;	// 0x11a049
+ (void)_promptForRestrictionsPasscodeWithCompletionHandler:(id)completionHandler;	// 0x118021
+ (id)artworkURLFromCollection:(id)collection;	// 0x11b51d
+ (id)artworkURLFromVariants:(id)variants;	// 0x11b4a1
+ (void)deletePersonalStation:(id)station requiringConfirmation:(BOOL)confirmation;	// 0x11a87d
+ (void)displayFailureDialogOfType:(unsigned)type stationName:(id)name;	// 0x11ab61
+ (void)handleOpenRadioURL:(id)url;	// 0x1192c9
+ (BOOL)isRadioURL:(id)url;	// 0x11921d
+ (void)playbackAddingStation:(id)station;	// 0x118b65
+ (void)playbackCreatingStationWithItem:(id)item artistBased:(BOOL)based displayFailure:(BOOL)failure completionHandler:(id)handler;	// 0x1185f1
+ (void)playbackStation:(id)station initialTracks:(id)tracks;	// 0x118509
+ (void)presentConfirmationDialogWithIdentifier:(id)identifier title:(id)title message:(id)message cancelButtonTitle:(id)title4 confirmationButtonTitle:(id)title5 selectionHandler:(id)handler;	// 0x11a525
+ (BOOL)submitLikeQueryForTrack:(id)track likedState:(int)state;	// 0x11b149
+ (void)teardownServiceUnavailableDialog;	// 0x11b0bd
@end
