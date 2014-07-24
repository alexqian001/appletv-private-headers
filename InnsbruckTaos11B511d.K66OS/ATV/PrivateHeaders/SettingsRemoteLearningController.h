/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "AppleTV-Structs.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SettingsRemoteLearningController : BRViewController {
	NSDictionary *_remoteDictionary;	// 104 = 0x68
	int _currentLearningButton;	// 108 = 0x6c
	int _firstLearningButton;	// 112 = 0x70
	int _lastLearningButton;	// 116 = 0x74
	BOOL _editingExtendedCodes;	// 120 = 0x78
	BOOL _reRecordingBasicButtons;	// 121 = 0x79
	BOOL _showingBasicSetupCompleteMessage;	// 122 = 0x7a
}
- (id)init;	// 0x2e6e89
- (void).cxx_destruct;	// 0x2e73f1
- (void)_advanceToNextLearningButton;	// 0x2e78ed
- (void)_beginExtendedRemoteSetup;	// 0x2e8b55
- (void)_buttonExistsOptionSelected:(id)selected;	// 0x2e7f95
- (id)_defaultCustomName;	// 0x2e86c1
- (id)_dictionaryForRemoteWithName:(id)name;	// 0x2e804d
- (BOOL)_goToPreviousLearningButton;	// 0x2e78a9
- (void)_learnCurrentButton;	// 0x2e7c69
- (id)_learningView;	// 0x2e7899
- (id)_localizedString:(id)string;	// 0x2e7d95
- (void)_nameCustomRemoteSet;	// 0x2e820d
- (void)_process3rdPartyCaptureDone:(id)done;	// 0x2e76fd
- (void)_process3rdPartyDuplicate:(id)duplicate;	// 0x2e76a5
- (void)_process3rdPartyError:(id)error;	// 0x2e7405
- (void)_process3rdPartyProgress:(id)progress;	// 0x2e74e1
- (void)_process3rdPartySuccess:(id)success;	// 0x2e7841
- (BOOL)_remoteHasExtendedButtons:(id)buttons;	// 0x2e81b9
- (void)_showBasicCompleteMessage;	// 0x2e87b1
- (void)_showBasicCompleteMessageOptionSelected:(id)selected;	// 0x2e8a61
- (void)_showButtonExistsMessage;	// 0x2e7da9
- (void)_startLearningCurrentButton;	// 0x2e7991
- (void)_usagePageAndCodeForCurrentButton:(XXStruct_K5nmsA *)currentButton;	// 0x2e7d01
- (id)accessibilityLabel;	// 0x2e7321
- (BOOL)brEventAction:(id)action;	// 0x2e7241
- (BOOL)isAccessibilityElement;	// 0x2e731d
- (void)setRemoteSetToEdit:(id)edit forExtendedCodes:(BOOL)extendedCodes;	// 0x2e71c5
- (void)wasExhumed;	// 0x2e715d
- (void)wasPopped;	// 0x2e70d9
- (void)wasPushed;	// 0x2e6f85
@end
