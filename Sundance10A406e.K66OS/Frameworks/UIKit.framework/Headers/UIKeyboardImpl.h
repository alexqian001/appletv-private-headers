/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIKeyboardCandidateListDelegate.h"

@class NSMutableArray, NSArray, NSTimer, NSMutableDictionary, UITextInputTraits, UITextInputArrowKeyHistory, UIKeyboardCandidate, UIAlertView, NSString, UIKeyboardInputManager, UIAutocorrectInlinePrompt, UIKeyboardLayout, UIDelayedAction;
@protocol UIKeyboardTypology, UIKeyInput, UITextInput, UITextInputPrivate, UIKeyboardInput, UIKeyboardImplGeometryDelegate, UIKeyboardCandidateList, UIKeyboardRecording, UIApplicationEventRecording;

@interface UIKeyboardImpl : UIView <UIKeyboardCandidateListDelegate> {
	id<UIKeyInput> m_delegate;	// 84 = 0x54
	UIView *m_languageIndicator;	// 88 = 0x58
	NSString *m_previousInputString;	// 92 = 0x5c
	UIKeyboardInputManager *m_inputManager;	// 96 = 0x60
	UIKeyboardCandidate *m_autocorrection;	// 100 = 0x64
	UIAutocorrectInlinePrompt *m_autocorrectPrompt;	// 104 = 0x68
	UIDelayedAction *m_autocorrectPromptAction;	// 108 = 0x6c
	NSMutableDictionary *m_autocorrectHistoryLists;	// 112 = 0x70
	NSMutableArray *m_recentUnacceptedAutocorrections;	// 116 = 0x74
	NSArray *m_candidates;	// 120 = 0x78
	id<UIKeyboardCandidateList> m_candidateList;	// 124 = 0x7c
	UIView *m_markedTextOverlay;	// 128 = 0x80
	id<UIKeyboardImplGeometryDelegate> m_geometryDelegate;	// 132 = 0x84
	NSObject<UIKeyboardRecording, UIApplicationEventRecording> *m_recorder;	// 136 = 0x88
	UIKeyboardLayout *m_layout;	// 140 = 0x8c
	NSMutableDictionary *m_keyedLayouts;	// 144 = 0x90
	NSString *m_inputModeLastChosen;	// 148 = 0x94
	struct {
		NSTimer *timer;
		GSEventRef eventToRepeat;
		BOOL firstRepeat;
	} m_hardwareRepeat;	// 152 = 0x98
	NSTimer *m_autoDeleteTimer;	// 164 = 0xa4
	BOOL m_autoDeleteJustFired;	// 168 = 0xa8
	unsigned m_autoDeleteCount;	// 172 = 0xac
	double m_autoDeleteLastDelete;	// 176 = 0xb0
	double m_autoDeleteInterval;	// 184 = 0xb8
	unsigned long m_autoDeleteShiftCharacter;	// 192 = 0xc0
	UIDelayedAction *m_longPressAction;	// 196 = 0xc4
	int m_orientation;	// 200 = 0xc8
	int m_originalOrientation;	// 204 = 0xcc
	CGPoint m_inputPoint;	// 208 = 0xd0
	int m_changeCount;	// 216 = 0xd8
	double m_changeTime;	// 220 = 0xdc
	id m_changedDelegate;	// 228 = 0xe4
	CFRunLoopObserverRef m_observer;	// 232 = 0xe8
	unsigned m_textInputChangingCount;	// 236 = 0xec
	BOOL m_textInputChangingText;	// 240 = 0xf0
	BOOL m_textInputChangingDirection;	// 241 = 0xf1
	BOOL m_textInputChangesIgnored;	// 242 = 0xf2
	BOOL m_insideKeyInputDelegateCall;	// 243 = 0xf3
	UITextInputTraits *m_defaultTraits;	// 244 = 0xf4
	UITextInputTraits *m_traits;	// 248 = 0xf8
	int m_returnKeyState;	// 252 = 0xfc
	int m_currentDirection;	// 256 = 0x100
	int m_contextWordDepth;	// 260 = 0x104
	BOOL m_autoDeleteOK;	// 264 = 0x108
	BOOL m_autocapitalizationPreference;	// 265 = 0x109
	BOOL m_autocorrectPromptTimerFired;	// 266 = 0x10a
	BOOL m_autocorrectionPreference;	// 267 = 0x10b
	BOOL m_autoshift;	// 268 = 0x10c
	BOOL m_caretShowingNow;	// 269 = 0x10d
	BOOL m_changeNotificationDisabled;	// 270 = 0x10e
	BOOL m_correctionLearningAllowed;	// 271 = 0x10f
	BOOL m_delegateIsSMSTextView;	// 272 = 0x110
	BOOL m_delegateRequiresKeyEvents;	// 273 = 0x111
	BOOL m_doubleSpacePeriodWasAppliedInCurrentContext;	// 274 = 0x112
	BOOL m_doubleSpacePeriodPreference;	// 275 = 0x113
	BOOL m_hardwareKeyboardAttached;	// 276 = 0x114
	BOOL m_inDealloc;	// 277 = 0x115
	BOOL m_inHardwareKeyboardMode;	// 278 = 0x116
	BOOL m_initializationDone;	// 279 = 0x117
	BOOL m_performDecomposingDelete;	// 280 = 0x118
	BOOL m_performanceLoggingEnabled;	// 281 = 0x119
	BOOL m_selecting;	// 282 = 0x11a
	BOOL m_shift;	// 283 = 0x11b
	BOOL m_shiftLocked;	// 284 = 0x11c
	BOOL m_shiftLockedEnabled;	// 285 = 0x11d
	BOOL m_settingShift;	// 286 = 0x11e
	BOOL m_shouldSkipCandidateSelection;	// 287 = 0x11f
	BOOL m_suggestionsShownForCurrentDeletion;	// 288 = 0x120
	BOOL m_originalShouldSkipCandidateSelection;	// 289 = 0x121
	BOOL m_updatingPreferences;	// 290 = 0x122
	BOOL m_changingGeometryWithSameOrientation;	// 291 = 0x123
	BOOL m_suppressGeometryChangeNotifications;	// 292 = 0x124
	BOOL m_acceptingCandidate;	// 293 = 0x125
	BOOL m_userChangedSelection;	// 294 = 0x126
	BOOL m_shouldChargeKeys;	// 295 = 0x127
	BOOL m_longPress;	// 296 = 0x128
	BOOL m_syntheticInput;	// 297 = 0x129
	BOOL m_replacingWord;	// 298 = 0x12a
	BOOL m_shiftNeedsUpdate;	// 299 = 0x12b
	BOOL m_shiftPreventAutoshift;	// 300 = 0x12c
	BOOL m_shiftHeldDownNeedsUpdated;	// 301 = 0x12d
	BOOL m_delegateAdoptsTextInput;	// 302 = 0x12e
	BOOL m_delegateAdoptsTextInputPrivate;	// 303 = 0x12f
	BOOL m_delegateAdoptsKeyboardInput;	// 304 = 0x130
	BOOL m_clientVariantSupportEnabled;	// 305 = 0x131
	BOOL m_clientVariantSupportEnabledEver;	// 306 = 0x132
	NSMutableArray *m_keyplaneNamesPreviousDelegate;	// 308 = 0x134
	NSMutableArray *m_keyplaneNamesCurrentDelegate;	// 312 = 0x138
	UITextInputArrowKeyHistory *m_arrowKeyHistory;	// 316 = 0x13c
	BOOL m_preRotateShift;	// 320 = 0x140
	BOOL m_preRotateShiftLocked;	// 321 = 0x141
	BOOL m_showInputModeIndicator;	// 322 = 0x142
	BOOL m_suppressUpdateCandidateView;	// 323 = 0x143
	BOOL m_shouldUpdateCacheOnInputModesChange;	// 324 = 0x144
	BOOL m_shouldSetInputModeInNextRun;	// 325 = 0x145
	BOOL m_rivenCenterFilled;	// 326 = 0x146
	float m_splitProgress;	// 328 = 0x148
	NSString *m_currentUsedInputMode;	// 332 = 0x14c
	NSString *m_lastUsedInputMode;	// 336 = 0x150
	BOOL m_needsCandidates;	// 340 = 0x154
	BOOL m_shouldSkipCandidateGeneration;	// 341 = 0x155
	BOOL m_updateLayoutOnShowKeyboard;	// 342 = 0x156
	BOOL m_receivedCandidatesInCurrentInputMode;	// 343 = 0x157
	BOOL m_markedTextChangesIgnored;	// 344 = 0x158
	int _currentAlertReason;	// 348 = 0x15c
	BOOL m_scrolling;	// 352 = 0x160
	id<UIKeyboardTypology> typologyRecorder;	// 356 = 0x164
	BOOL m_showsCandidateBar;	// 360 = 0x168
	BOOL m_showsCandidateInline;	// 361 = 0x169
	UIAlertView *keyboardAlertView;	// 364 = 0x16c
	BOOL committingCandidate;	// 368 = 0x170
	BOOL geometryIsChanging;	// 369 = 0x171
}
@property(retain, nonatomic) UITextInputArrowKeyHistory *arrowKeyHistory;	// G=0x309db489; S=0x309cbff1; @synthesize=m_arrowKeyHistory
@property(readonly, assign) BOOL autocapitalizationPreference;	// G=0x309a6ea5; converted property
@property(readonly, retain) UIAutocorrectInlinePrompt *autocorrectPrompt;	// G=0x309dcd0d; converted property
@property(assign) BOOL autocorrectSpellingEnabled;	// G=0x309d2fd9; S=0x309a51f5; converted property
@property(readonly, assign) BOOL autocorrectionPreference;	// G=0x309a51c1; converted property
@property(assign) BOOL automaticMinimizationEnabled;	// G=0x30af1511; S=0x30af1545; converted property
@property(assign) BOOL caretBlinks;	// G=0x30af74fd; S=0x309a8b15; converted property
@property(assign) BOOL caretVisible;	// G=0x309d8fc5; S=0x309a8b99; converted property
@property(readonly, assign) BOOL centerFilled;	// G=0x30af0b75; 
@property(readonly, assign) int changeCount;	// G=0x309a67b9; converted property
@property(assign) BOOL changeNotificationDisabled;	// G=0x30af28c9; S=0x30af28d9; converted property
@property(retain, nonatomic) id changedDelegate;	// G=0x309a6a61; S=0x309a6a71; @synthesize=m_changedDelegate
@property(retain, nonatomic) id changedDelegate;	// @dynamic
@property(readonly, assign, getter=isClientVariantSupportEnabled) BOOL clientVariantSupportEnabled;	// G=0x309b0fe5; converted property
@property(assign, nonatomic) BOOL committingCandidate;	// G=0x30af7751; S=0x30af7761; @synthesize
@property(retain, nonatomic) NSString *currentUsedInputMode;	// G=0x309dc351; S=0x309a57f9; @synthesize=m_currentUsedInputMode
@property(retain, nonatomic) UIResponder<UIKeyInput> *delegate;	// G=0x309a0a29; S=0x309a5ee5; 
@property(readonly, assign, nonatomic) UIResponder *delegateAsResponder;	// G=0x30af257d; 
@property(readonly, assign) BOOL delegateIsSMSTextView;	// G=0x309a6ac1; converted property
@property(readonly, assign) BOOL doubleSpacePeriodPreference;	// G=0x309a191d; converted property
@property(assign, nonatomic) id<UIKeyboardImplGeometryDelegate> geometryDelegate;	// G=0x309a5ed1; S=0x309a5b91; @synthesize=m_geometryDelegate
@property(assign, nonatomic) BOOL geometryIsChanging;	// G=0x30af7771; S=0x309b6109; @synthesize
@property(retain) id hardwareKeyboardsSeenPreference;	// G=0x30af1a79; S=0x30af1ab1; converted property
@property(assign, nonatomic, getter=isInHardwareKeyboardMode) BOOL inHardwareKeyboardMode;	// G=0x309a2ecd; S=0x309da1f1; 
@property(readonly, assign, nonatomic) UIResponder<UITextInput> *inputDelegate;	// G=0x309a2cc9; 
@property(retain, nonatomic) UIKeyboardInputManager *inputManager;	// G=0x309a4bf1; S=0x309a4be1; @synthesize=m_inputManager
@property(readonly, retain) NSString *inputModeLastChosen;	// G=0x30af21e1; converted property
@property(retain, nonatomic) UIAlertView *keyboardAlertView;	// G=0x30a545c1; S=0x30a545d1; @synthesize
@property(retain, nonatomic) NSString *lastUsedInputMode;	// G=0x30af7741; S=0x30a549a9; @synthesize=m_lastUsedInputMode
@property(readonly, assign, nonatomic) id<UIKeyboardInput> legacyInputDelegate;	// G=0x309a8d81; 
@property(assign, getter=isLongPress) BOOL longPress;	// G=0x30a0e83d; S=0x30af7a7d; converted property
@property(readonly, retain) UIView *markedTextOverlay;	// G=0x30af2c41; converted property
@property(readonly, assign) unsigned minimumTouchesForTranslation;	// G=0x30af0d8d; 
@property(assign) unsigned phraseBoundary;	// G=0x30af374d; S=0x30af36c5; converted property
@property(readonly, assign, nonatomic) UIResponder<UITextInputPrivate> *privateInputDelegate;	// G=0x309a0a05; 
@property(retain, nonatomic) id<UIKeyboardRecording, UIApplicationEventRecording> recorder;	// G=0x309a57e9; S=0x30a546e5; 
@property(assign) BOOL returnKeyEnabled;	// G=0x309b4119; S=0x309a6ca1; converted property
@property(assign) BOOL rivenSplitLock;	// G=0x30af0cfd; S=0x30af0d31; 
@property(assign, getter=isShiftLocked) BOOL shiftLocked;	// G=0x309b23f1; S=0x30af3129; converted property
@property(readonly, assign) BOOL shiftLockedEnabled;	// G=0x30af3191; converted property
@property(assign) BOOL shouldChargeKeys;	// G=0x30af6691; S=0x309a6c71; converted property
@property(assign, nonatomic) BOOL shouldSetInputModeInNextRun;	// G=0x30af7721; S=0x30af7731; @synthesize=m_shouldSetInputModeInNextRun
@property(readonly, assign, nonatomic) BOOL shouldShowCandidateBar;	// G=0x309b4cc9; 
@property(assign, nonatomic) BOOL shouldSkipCandidateSelection;	// G=0x30a0ee0d; S=0x309a9de5; 
@property(assign, nonatomic) BOOL showInputModeIndicator;	// G=0x309f6739; S=0x30af7711; @synthesize=m_showInputModeIndicator
@property(assign, nonatomic) BOOL showsCandidateBar;	// G=0x309a5e09; S=0x309b4e19; @synthesize=m_showsCandidateBar
@property(assign, nonatomic) BOOL showsCandidateInline;	// G=0x30a53f49; S=0x30a5235d; @synthesize=m_showsCandidateInline
@property(readonly, assign, nonatomic) BOOL splitTransitionInProgress;	// G=0x309b57c1; 
@property(retain, nonatomic) id<UIKeyboardTypology> typologyRecorder;	// G=0x309a4c01; S=0x30a54721; @synthesize
+ (void)_clearHardwareKeyboardMinimizationPreference;	// 0x30af79f5
+ (id)activeInstance;	// 0x308c3555
+ (float)additionalInstanceHeight;	// 0x309a5db9
+ (float)additionalInstanceHeightLoading;	// 0x30af0545
+ (void)applicationDidEnterBackground:(id)application;	// 0x30a53d7d
+ (void)applicationDidReceiveMemoryWarning:(id)application;	// 0x30a063c9
+ (void)applicationWillEnterForeground:(id)application;	// 0x30a55315
+ (void)applicationWillResignActive:(id)application;	// 0x30a539e1
+ (void)applicationWillSuspend:(id)application;	// 0x30a53a15
+ (CGSize)defaultSize;	// 0x30af04e9
+ (CGSize)defaultSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x3092385d
+ (void)hardwareKeyboardAvailabilityChanged;	// 0x30af6bf9
+ (int)interfaceOrientationForSize:(CGSize)size;	// 0x309a5be9
+ (BOOL)isSplit;	// 0x309a9709
+ (CGSize)keyboardSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x309a9441
+ (void)markElapsed:(id)elapsed;	// 0x309a5b21
+ (void)markPerformance:(id)performance;	// 0x309a06ad
+ (id)normalizedInputModesFromPreference;	// 0x30af050d
+ (int)persistentDictationTargetZone;	// 0x30af0f3d
+ (CGPoint)persistentDictationWindowOffset;	// 0x30af1139
+ (CGPoint)persistentOffset;	// 0x309262b1
+ (float)persistentSplitProgress;	// 0x30af0df1
+ (void)refreshRivenStateWithTraits:(id)traits isKeyboard:(BOOL)keyboard;	// 0x309a16b9
+ (void)releaseSharedInstance;	// 0x30938bf5
+ (BOOL)rivenInstalled;	// 0x30929fed
+ (BOOL)rivenPreference;	// 0x308b1e15
+ (BOOL)rivenTranslationPreference;	// 0x30928fad
+ (void)setParentTestForProfiling:(id)profiling;	// 0x30af7819
+ (void)setPersistentDictationTargetZone:(int)zone;	// 0x30af0f85
+ (void)setPersistentDictationWindowOffset:(CGPoint)offset;	// 0x30af0fe1
+ (void)setPersistentOffset:(CGPoint)offset;	// 0x309e23d1
+ (void)setPersistentSplitProgress:(float)progress;	// 0x30af0e5d
+ (id)sharedInstance;	// 0x309a0115
+ (CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x30923701
+ (CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation textInputTraits:(id)traits;	// 0x309a94bd
+ (float)splitProgress;	// 0x30af0e4d
+ (BOOL)supportsSplit;	// 0x309ac191
+ (void)suppressSetPersistentOffset:(BOOL)offset;	// 0x30af0f29
- (id)initWithFrame:(CGRect)frame;	// 0x309a02e9
- (id)UILanguagePreference;	// 0x309a19d9
- (id)_autocorrectPromptRects;	// 0x30a1c8d5
- (int)_clipCornersOfView:(id)view;	// 0x30af28ed
- (id)_getAutocorrection;	// 0x30af7d09
- (id)_getCurrentKeyboardName;	// 0x30af7c21
- (id)_getCurrentKeyplaneName;	// 0x30af7bbd
- (id)_getLocalizedInputMode;	// 0x30af7c85
- (void)_handleWebKeyEvent:(GSEventRef)event withEventType:(int)eventType withInputString:(id)inputString withInputStringIgnoringModifiers:(id)inputStringIgnoringModifiers;	// 0x30af7169
- (void)_handleWebKeyEvent:(GSEventRef)event withInputString:(id)inputString;	// 0x30af72c1
- (void)_handleWebKeyEvent:(GSEventRef)event withInputString:(id)inputString withInputStringIgnoringModifiers:(id)inputStringIgnoringModifiers;	// 0x30af7245
- (BOOL)_hasCandidates;	// 0x309a2629
- (unsigned)_inputCountForAutocorrectionCandidate;	// 0x30af7e39
- (id)_inputForAutocorrectionCandidate;	// 0x30a19be5
- (BOOL)_isShowingCandidateUIWithAvailableCandidates;	// 0x30af78b9
- (id)_layout;	// 0x309a949d
- (BOOL)_needsCandidates;	// 0x30af7de9
- (int)_positionInCandidateList:(id)candidateList;	// 0x30af7d29
- (id)_rangeForAutocorrectionText:(id)autocorrectionText;	// 0x30a1cb2d
- (void)_releaseInputManager;	// 0x30af7e19
- (void)_remapKeyEvent:(GSEventRef)event;	// 0x309da319
- (void)_resetInputLocation;	// 0x30af7df9
- (void)_setAutocorrects:(BOOL)autocorrects;	// 0x30af7ce9
- (void)_setInputManager:(id)manager;	// 0x30af7855
- (void)_setNeedsCandidates:(BOOL)candidates;	// 0x30af7dd9
- (void)_setShiftLockedEnabled:(BOOL)enabled;	// 0x30af7865
- (id)_shortcutConversionCandidateForInput:(id)input;	// 0x309dc361
- (BOOL)_shouldMinimizeForHardwareKeyboard;	// 0x309a5ea1
- (BOOL)_shouldShowCandidateBar:(BOOL)bar;	// 0x309b4ce5
- (void)_updateSoundPreheatingForWindow:(id)window;	// 0x309a6891
- (void)_willMoveToWindow:(id)window withAncestorView:(id)ancestorView;	// 0x309b5f1d
- (void)acceptAutocorrection;	// 0x309e39dd
- (void)acceptCandidate:(id)candidate atIndex:(unsigned)index;	// 0x30af469d
- (void)acceptCurrentCandidate;	// 0x30af4a6d
- (void)acceptCurrentCandidateIfSelected;	// 0x309b3679
- (BOOL)acceptInputString:(id)string;	// 0x309d72b1
- (BOOL)acceptWord:(id)word firstDelete:(unsigned)aDelete;	// 0x30a15ac1
- (id)accessibilityLabelForCandidate:(id)candidate;	// 0x30af6665
- (void)addInputObject:(id)object;	// 0x30af4d11
- (void)addInputString:(id)string;	// 0x30af3441
- (void)addInputString:(id)string fromVariantKey:(BOOL)variantKey;	// 0x309db64d
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x30af1df9
- (BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)sortingMethod;	// 0x30af65a9
- (void)animateAutocorrection;	// 0x30a746d1
- (void)applicationResumedEventsOnly:(id)only;	// 0x30af063d
- (void)applicationSuspendedEventsOnly:(id)only;	// 0x30af05d1
- (void)applyAutocorrection;	// 0x30a742cd
// declared property getter: - (id)arrowKeyHistory;	// 0x309db489
- (void)autoDeleteTimerFired:(id)fired;	// 0x30af67d9
// converted property getter: - (BOOL)autocapitalizationPreference;	// 0x309a6ea5
- (id)autocorrectHistoryForInputMode:(id)inputMode;	// 0x30a70741
// converted property getter: - (id)autocorrectPrompt;	// 0x309dcd0d
// converted property getter: - (BOOL)autocorrectSpellingEnabled;	// 0x309d2fd9
- (void)autocorrectionAnimationDidStop:(id)autocorrectionAnimation finished:(id)finished context:(void *)context;	// 0x30a751b1
// converted property getter: - (BOOL)autocorrectionPreference;	// 0x309a51c1
- (BOOL)autocorrectionPreferenceForTraits;	// 0x309a514d
- (id)autocorrectionRecordForWord:(id)word;	// 0x30a70709
// converted property getter: - (BOOL)automaticMinimizationEnabled;	// 0x30af1511
- (void)callChanged;	// 0x309d48b5
- (void)callChangedSelection;	// 0x309a8d05
- (BOOL)callLayoutIgnoresShiftState;	// 0x30a0eee5
- (BOOL)callLayoutIsShiftKeyBeingHeld;	// 0x309b509d
- (BOOL)callLayoutIsShiftKeyPlaneChooser;	// 0x309b504d
- (void)callLayoutLongPressAction;	// 0x30af7785
- (void)callLayoutSetAutoshift:(BOOL)autoshift;	// 0x309a92ed
- (void)callLayoutSetShift:(BOOL)shift;	// 0x309a9295
- (void)callLayoutUpdateAllLocalizedKeys;	// 0x30af77cd
- (void)callLayoutUpdateLocalizedKeys;	// 0x309a5105
- (void)callLayoutUpdateReturnKey;	// 0x309a6cd1
- (BOOL)callLayoutUsesAutoShift;	// 0x309a917d
- (BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)call characterCountForRapidDelete:(int)rapidDelete;	// 0x30af2639
- (BOOL)callShouldInsertText:(id)call;	// 0x309dc631
- (BOOL)callShouldReplaceExtendedRange:(unsigned)call withText:(id)text includeMarkedText:(BOOL)text3;	// 0x30a73f69
- (BOOL)canHandleKeyHitTest;	// 0x309b49b5
- (void)cancelAllKeyEvents;	// 0x309f7cd9
- (void)cancelSplitTransition;	// 0x30af1325
- (id)candidateList;	// 0x30af4bd5
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x30af4b35
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x30af4b59
// converted property getter: - (BOOL)caretBlinks;	// 0x30af74fd
// converted property getter: - (BOOL)caretVisible;	// 0x309d8fc5
// declared property getter: - (BOOL)centerFilled;	// 0x30af0b75
// converted property getter: - (int)changeCount;	// 0x309a67b9
// converted property getter: - (BOOL)changeNotificationDisabled;	// 0x30af28c9
// declared property getter: - (id)changedDelegate;	// 0x309a6a61
- (CFDictionaryRef)chargedKeyProbabilities;	// 0x30af66a1
- (BOOL)checkSpellingPreference;	// 0x309a5311
- (BOOL)checkSpellingPreferenceForTraits;	// 0x309a529d
- (void)clearAnimations;	// 0x30a53fa5
- (void)clearAutocorrectPromptTimer;	// 0x309a2e31
- (void)clearChangeTimeAndCount;	// 0x309a67cd
- (void)clearDelegate;	// 0x30a53f69
- (void)clearExcessKeyboardMemory;	// 0x30a0e4e5
- (void)clearInput;	// 0x309a2335
- (void)clearKeyAreas;	// 0x309b49d9
- (void)clearLanguageIndicator;	// 0x30af7a8d
- (void)clearLayouts;	// 0x309a580d
- (void)clearLongPressTimer;	// 0x309c3141
- (void)clearSelection;	// 0x30af7525
- (void)clearShiftState;	// 0x309ddf71
- (void)clearTimers;	// 0x30a53ff5
- (void)clearTransientState;	// 0x309a6a81
- (id)clientOverrideForKey:(id)key;	// 0x30af13c5
- (id)clientVariantDelegate;	// 0x309a6d65
- (id)clientVariantsForKey:(id)key;	// 0x30af136d
// declared property getter: - (BOOL)committingCandidate;	// 0x30af7751
- (CGRect)convertRectToAutocorrectRect:(CGRect)autocorrectRect delegateView:(id)view container:(id)container;	// 0x30a1d171
- (id)currentInputContextFromInputDelegateWithWordRange:(id)wordRange;	// 0x309a87a1
- (BOOL)currentKeyboardTraitsAllowCandidateBar;	// 0x309e3c01
- (float)currentLandscapeHeight;	// 0x30af0375
- (float)currentLandscapeWidth;	// 0x30af02c9
- (float)currentPortraitHeight;	// 0x309b5685
- (float)currentPortraitWidth;	// 0x309b559d
// declared property getter: - (id)currentUsedInputMode;	// 0x309dc351
- (void)dealloc;	// 0x30a54731
- (void)defaultsDidChange;	// 0x30af0925
- (void)delayedInit;	// 0x309c1e65
// declared property getter: - (id)delegate;	// 0x309a0a29
// declared property getter: - (id)delegateAsResponder;	// 0x30af257d
// converted property getter: - (BOOL)delegateIsSMSTextView;	// 0x309a6ac1
- (BOOL)delegateSuggestionsForCurrentInput;	// 0x30af6111
- (BOOL)delegateSupportsCorrectionUI;	// 0x30a19bb9
- (void)deleteBackward;	// 0x30af342d
- (void)deleteBackwardAndNotify:(BOOL)notify;	// 0x30af334d
- (void)deleteForwardAndNotify:(BOOL)notify;	// 0x30af33bd
- (void)deleteFromInput;	// 0x30af3f59
- (void)detach;	// 0x30a545e5
- (void)dismissKeyboard;	// 0x30af6fb5
- (BOOL)displaysCandidates;	// 0x309d4621
// converted property getter: - (BOOL)doubleSpacePeriodPreference;	// 0x309a191d
- (CGSize)dragGestureSize;	// 0x30af0cc5
- (void)enable;	// 0x30af2625
- (void)fadeAnimationDidStop:(id)fadeAnimation finished:(id)finished;	// 0x30af1dc5
- (void)fadeAutocorrectPrompt;	// 0x30af5e91
- (void)finishSplitTransitionWithProgress:(float)progress;	// 0x30af7b2d
- (void)firstHardwareAutoRepeat:(id)repeat;	// 0x30af6cd1
- (BOOL)flushKeyplaneName:(id)name;	// 0x309e3cb9
- (void)forceShiftUpdate;	// 0x30a7061d
- (void)forceShiftUpdateIfKeyboardStateChanged;	// 0x309d58a9
- (CGRect)frameForKeylayoutName:(id)keylayoutName;	// 0x30af0c91
- (id)generateAutocorrectionReplacements:(id)replacements;	// 0x30a7253d
- (void)generateCandidates;	// 0x309c318d
- (void)generateCandidatesWithOptions:(int)options;	// 0x309c31a1
- (void)geometryChangeDone:(BOOL)done;	// 0x309c3071
// declared property getter: - (id)geometryDelegate;	// 0x309a5ed1
// declared property getter: - (BOOL)geometryIsChanging;	// 0x30af7771
- (id)groupedCandidatesFromCandidates:(id)candidates usingSortingMethod:(id)method;	// 0x30af65d5
- (void)groupedCandidatesFromCandidates:(id)candidates usingSortingMethod:(id)method completion:(id)completion;	// 0x30af6605
- (void)handleAutoDelete;	// 0x30af6981
- (void)handleDelete;	// 0x30af3335
- (void)handleDeleteAsRepeat:(BOOL)repeat;	// 0x30af3269
- (void)handleDeleteWithNonZeroInputCount;	// 0x30af3d01
- (void)handleDeleteWithZeroInputCount;	// 0x30af3965
- (BOOL)handleDoubleSpacePeriodForInputString:(id)inputString afterSpace:(BOOL)space elapsedTime:(double)time;	// 0x30a16111
- (BOOL)handleKeyCommand:(GSEventRef)command repeatOkay:(BOOL *)okay;	// 0x309da3b9
- (void)handleKeyEvent:(GSEventRef)event;	// 0x309d99e1
- (void)handleObserverCallback;	// 0x309d4819
- (void)handleStringInput:(id)input fromVariantKey:(BOOL)variantKey;	// 0x309db591
- (void)hardwareAutoRepeat:(id)repeat;	// 0x30af6cb1
- (void)hardwareKeyboardAvailabilityChanged;	// 0x30af6c2d
// converted property getter: - (id)hardwareKeyboardsSeenPreference;	// 0x30af1a79
- (BOOL)hasAutoRepeat;	// 0x30af7875
- (BOOL)hasEditableMarkedText;	// 0x309a85f5
- (BOOL)hasMarkedText;	// 0x309a8641
- (BOOL)hideAccessoryViewsDuringSplit;	// 0x30af1285
- (void)hideKeyboard;	// 0x30af6d59
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x309d4e59
- (id)indexTitlesForGroupTitles:(id)groupTitles sortingMethod:(id)method;	// 0x30af6635
// declared property getter: - (id)inputDelegate;	// 0x309a2cc9
// declared property getter: - (id)inputManager;	// 0x309a4bf1
- (id)inputModeFirstPreference;	// 0x30af1625
// converted property getter: - (id)inputModeLastChosen;	// 0x30af21e1
- (id)inputModeLastChosenPreference;	// 0x30af1675
- (id)inputModeLastUsedForLanguage:(id)language;	// 0x30af17e1
- (id)inputModeLastUsedPreference;	// 0x309a1c95
- (id)inputModePreference;	// 0x309a1961
- (id)inputOverlayContainer;	// 0x30a1cd8d
- (id)inputStringFromPhraseBoundary;	// 0x30af2ced
- (void)insertText:(id)text;	// 0x30a0efa9
- (void)installRecorder;	// 0x309a58f9
- (void)installTypology;	// 0x309a59b5
- (int)interfaceOrientation;	// 0x309c5259
- (BOOL)isAllowedInputMode:(id)mode;	// 0x309a1d25
- (BOOL)isAutoDeleteActive;	// 0x30af79b5
- (BOOL)isAutoFillMode;	// 0x30a1f8f1
- (BOOL)isAutoShifted;	// 0x309ac281
// converted property getter: - (BOOL)isClientVariantSupportEnabled;	// 0x309b0fe5
- (BOOL)isDesiredInputMode:(id)mode;	// 0x309a79dd
// declared property getter: - (BOOL)isInHardwareKeyboardMode;	// 0x309a2ecd
// converted property getter: - (BOOL)isLongPress;	// 0x30a0e83d
- (BOOL)isMinimized;	// 0x309a4c49
// converted property getter: - (BOOL)isShiftLocked;	// 0x309b23f1
- (BOOL)isShifted;	// 0x309d4af9
- (BOOL)isUsingDictationLayout;	// 0x30af5269
- (BOOL)isValidKeyInput:(id)input;	// 0x309db499
- (void)keyActivated;	// 0x30af3251
- (void)keyDeactivated;	// 0x30af3261
- (int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withTouch:(id)touch forceShift:(BOOL)shift forcingKey:(int)key;	// 0x309d6661
// declared property getter: - (id)keyboardAlertView;	// 0x30a545c1
- (void)keyboardDidHide:(id)keyboard;	// 0x30a0e641
- (BOOL)keyboardDrawsOpaque;	// 0x30a0a9dd
- (BOOL)keyboardRecordingEnabled;	// 0x309a5939
- (BOOL)keyboardsExpandedPreference;	// 0x30af14dd
- (id)keyplaneNameInCurrentDelegateListForIndex:(int)index;	// 0x30af1471
// declared property getter: - (id)lastUsedInputMode;	// 0x30af7741
- (void)launchTypologyApplication;	// 0x30af7a55
- (void)layoutHasChanged;	// 0x30a51b75
// declared property getter: - (id)legacyInputDelegate;	// 0x309a8d81
- (void)longPressAction;	// 0x30af6bb5
// converted property getter: - (id)markedTextOverlay;	// 0x30af2c41
- (void)mediaKeyDown:(GSEventRef)down;	// 0x30af744d
// declared property getter: - (unsigned)minimumTouchesForTranslation;	// 0x30af0d8d
- (void)movePhraseBoundaryToDirection:(int)direction;	// 0x30af376d
- (BOOL)needsToDeferUpdateTextCandidateView;	// 0x30af518d
- (BOOL)noContent;	// 0x30a10841
- (void)notifyShiftState;	// 0x309a91cd
- (void)performClientVariantActionNamed:(id)named;	// 0x30af141d
- (BOOL)performanceLoggingPreference;	// 0x309c2005
// converted property getter: - (unsigned)phraseBoundary;	// 0x30af374d
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x309c4f3d
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x309d4b1d
- (void)prepareForGeometryChange;	// 0x309b5fa9
- (void)prepareForSelectionChange;	// 0x309caf05
- (void)prepareLayoutForInterfaceOrientation:(int)interfaceOrientation;	// 0x30af228d
- (void)prepareUsedKeyplaneNameListForNewDelegate;	// 0x309a6e5d
// declared property getter: - (id)privateInputDelegate;	// 0x309a0a05
- (void)pushRecentAutocorrectionSuggestion:(id)suggestion;	// 0x30a1c821
- (id)recentAutocorrectionSuggestionForTypedString:(id)typedString;	// 0x30a16045
- (void)recomputeActiveInputModes;	// 0x30af30dd
- (void)recomputeActiveInputModesFromList:(id)list;	// 0x309a7699
- (void)recordAcceptedAutocorrection:(id)autocorrection;	// 0x30a74ed1
- (void)recordRejectedAutocorrection:(id)autocorrection;	// 0x30af60c1
// declared property getter: - (id)recorder;	// 0x309a57e9
- (void)refreshRivenPreferences;	// 0x309a1689
- (void)registerKeyArea:(CGPoint)area withRadii:(CGPoint)radii forKeyCode:(unsigned short)keyCode forLowerKey:(id)lowerKey forUpperKey:(id)upperKey;	// 0x309b4b81
- (void)releaseKeyplaneNameFromPreviousDelegateList:(id)previousDelegateList;	// 0x309abbe5
- (void)releaseSuppressUpdateCandidateView;	// 0x309c269d
- (void)removeAutocorrectPrompt;	// 0x309a2ced
- (void)removeAutocorrection;	// 0x30af466d
- (void)removeFromSuperview;	// 0x30a54515
- (void)replaceText:(id)text;	// 0x30af4e0d
- (void)resizeCandidateBarWithDelta:(float)delta;	// 0x30af52b1
- (void)resizeForKeyplaneSize:(CGSize)keyplaneSize;	// 0x309ad411
- (void)retainKeyplaneNameInCurrentDelegateList:(id)currentDelegateList;	// 0x309abc35
- (id)returnKeyDisplayName;	// 0x309b4139
// converted property getter: - (BOOL)returnKeyEnabled;	// 0x309b4119
- (int)returnKeyType;	// 0x309b41b1
// declared property getter: - (BOOL)rivenSplitLock;	// 0x30af0cfd
- (void)saveInputModesPreference:(id)preference;	// 0x30af15e9
- (void)scheduleReplacementsWithOptions:(unsigned)options;	// 0x30af4fbd
- (id)searchStringForMarkedText;	// 0x30af2cb5
- (void)selectionDidChange:(id)selection;	// 0x309cbdb5
- (void)selectionScrolling:(id)scrolling;	// 0x30af0651
- (id)selectionView;	// 0x309a8b41
- (void)selectionWillChange:(id)selection;	// 0x309caec5
// declared property setter: - (void)setArrowKeyHistory:(id)history;	// 0x309cbff1
// converted property setter: - (void)setAutocorrectSpellingEnabled:(BOOL)enabled;	// 0x309a51f5
- (void)setAutocorrection:(id)autocorrection;	// 0x309a23cd
// converted property setter: - (void)setAutomaticMinimizationEnabled:(BOOL)enabled;	// 0x30af1545
- (void)setCandidateList:(id)list updateCandidateView:(BOOL)view;	// 0x30af4ff9
- (void)setCandidates:(id)candidates;	// 0x309a24c5
// converted property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x309a8b15
// converted property setter: - (void)setCaretVisible:(BOOL)visible;	// 0x309a8b99
// converted property setter: - (void)setChangeNotificationDisabled:(BOOL)disabled;	// 0x30af28d9
- (void)setChanged;	// 0x309d40e5
// declared property setter: - (void)setChangedDelegate:(id)delegate;	// 0x309a6a71
// declared property setter: - (void)setCommittingCandidate:(BOOL)candidate;	// 0x30af7761
- (void)setCorrectionLearningAllowed:(BOOL)allowed;	// 0x30af2489
// declared property setter: - (void)setCurrentUsedInputMode:(id)mode;	// 0x309a57f9
- (void)setDefaultTextInputTraits:(id)traits;	// 0x309b5e8d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x309a5ee5
- (void)setDelegate:(id)delegate force:(BOOL)force;	// 0x309a5ef9
- (void)setFrame:(CGRect)frame;	// 0x309a0719
// declared property setter: - (void)setGeometryDelegate:(id)delegate;	// 0x309a5b91
// declared property setter: - (void)setGeometryIsChanging:(BOOL)changing;	// 0x309b6109
// converted property setter: - (void)setHardwareKeyboardsSeenPreference:(id)preference;	// 0x30af1ab1
// declared property setter: - (void)setInHardwareKeyboardMode:(BOOL)hardwareKeyboardMode;	// 0x309da1f1
- (void)setInitialDirection;	// 0x309a8bc9
// declared property setter: - (void)setInputManager:(id)manager;	// 0x309a4be1
- (void)setInputMode:(id)mode;	// 0x309a1e2d
- (void)setInputMode:(id)mode userInitiated:(BOOL)initiated;	// 0x309a1e41
- (void)setInputModeFromPreferences;	// 0x309a1a6d
- (void)setInputModeLastChosenPreference;	// 0x30af16d1
- (void)setInputModeToNextASCIICapableInPreferredList;	// 0x30af2195
- (void)setInputModeToNextInPreferredList;	// 0x30af1ff1
- (void)setInputObject:(id)object;	// 0x30af4be9
- (void)setInputPoint:(CGPoint)point;	// 0x309d72ed
// declared property setter: - (void)setKeyboardAlertView:(id)view;	// 0x30a545d1
// declared property setter: - (void)setLastUsedInputMode:(id)mode;	// 0x30a549a9
// converted property setter: - (void)setLongPress:(BOOL)press;	// 0x30af7a7d
- (void)setMarkedText;	// 0x30af2b45
- (void)setOrientation;	// 0x309a07c1
// converted property setter: - (void)setPhraseBoundary:(unsigned)boundary;	// 0x30af36c5
- (void)setPreviousInputString:(id)string;	// 0x309d3dc9
// declared property setter: - (void)setRecorder:(id)recorder;	// 0x30a546e5
// converted property setter: - (void)setReturnKeyEnabled:(BOOL)enabled;	// 0x309a6ca1
// declared property setter: - (void)setRivenSplitLock:(BOOL)lock;	// 0x30af0d31
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x30af2d79
- (void)setShift:(BOOL)shift;	// 0x309d3f61
- (void)setShift:(BOOL)shift autoshift:(BOOL)autoshift;	// 0x309d3f75
// converted property setter: - (void)setShiftLocked:(BOOL)locked;	// 0x30af3129
- (void)setShiftLockedForced:(BOOL)forced;	// 0x30af3165
- (void)setShiftNeedsUpdate;	// 0x309d4011
- (void)setShiftOffIfNeeded;	// 0x309d3ed5
- (void)setShiftPreventAutoshift:(BOOL)autoshift;	// 0x309d40c1
// converted property setter: - (void)setShouldChargeKeys:(BOOL)chargeKeys;	// 0x309a6c71
// declared property setter: - (void)setShouldSetInputModeInNextRun:(BOOL)setInputModeInNextRun;	// 0x30af7731
// declared property setter: - (void)setShouldSkipCandidateSelection:(BOOL)skipCandidateSelection;	// 0x309a9de5
- (void)setShouldUpdateCacheOnInputModesChange:(BOOL)updateCacheOnInputModesChange;	// 0x30af1a69
// declared property setter: - (void)setShowInputModeIndicator:(BOOL)indicator;	// 0x30af7711
// declared property setter: - (void)setShowsCandidateBar:(BOOL)bar;	// 0x309b4e19
// declared property setter: - (void)setShowsCandidateInline:(BOOL)anInline;	// 0x30a5235d
- (void)setSplit:(BOOL)split animated:(BOOL)animated;	// 0x30af7ad1
- (void)setSplitProgress:(float)progress;	// 0x30af0d95
- (void)setTextInputChangesIgnored:(BOOL)ignored;	// 0x30af7bad
// declared property setter: - (void)setTypologyRecorder:(id)recorder;	// 0x30a54721
- (void)setUsesCandidateSelection:(BOOL)selection;	// 0x309b3771
- (unsigned)shiftFlagsForInputString;	// 0x30a0ee6d
- (BOOL)shiftLockPreference;	// 0x309a18e9
// converted property getter: - (BOOL)shiftLockedEnabled;	// 0x30af3191
- (BOOL)shouldAcceptCandidate:(id)candidate beforeInputString:(id)string;	// 0x30af3481
// converted property getter: - (BOOL)shouldChargeKeys;	// 0x30af6691
- (BOOL)shouldEnableShiftForDeletedCharacter:(unsigned long)deletedCharacter;	// 0x30af38bd
// declared property getter: - (BOOL)shouldSetInputModeInNextRun;	// 0x30af7721
// declared property getter: - (BOOL)shouldShowCandidateBar;	// 0x309b4cc9
// declared property getter: - (BOOL)shouldSkipCandidateSelection;	// 0x30a0ee0d
- (BOOL)shouldSkipCandidateSelectionForPopupVariantString:(id)popupVariantString;	// 0x30af75d1
- (BOOL)shouldSwitchInputMode:(id)mode;	// 0x309a7fc9
- (void)showInformationalAlertIfNeededForReason:(int)reason;	// 0x30af1e7d
// declared property getter: - (BOOL)showInputModeIndicator;	// 0x309f6739
- (void)showInternationalKeyInfoAlertIfNeeded;	// 0x30af1fd9
- (void)showKeyboard;	// 0x30af6e05
- (void)showNextCandidates;	// 0x30af4b15
// declared property getter: - (BOOL)showsCandidateBar;	// 0x309a5e09
// declared property getter: - (BOOL)showsCandidateInline;	// 0x30a53f49
- (id)sortingMethods;	// 0x30af6555
// declared property getter: - (BOOL)splitTransitionInProgress;	// 0x309b57c1
- (void)startAutoDeleteTimer;	// 0x30af6b41
- (void)startCaretBlinkIfNeeded;	// 0x30af74d1
- (void)startKeyboardRecording;	// 0x30bb0809
- (void)stopAutoDelete;	// 0x309a6965
- (void)stopKeyboardRecording;	// 0x30bb0911
- (void)storeDelegateConformance;	// 0x309a67f5
- (CGRect)subtractKeyboardFrameFromRect:(CGRect)rect inView:(id)view;	// 0x309d4339
- (BOOL)suppliesCompletions;	// 0x30af31a1
- (BOOL)supportsNumberKeySelection;	// 0x30af322d
- (BOOL)swipeToTabPreference;	// 0x309a9d99
- (void)takeTextInputTraitsFromDelegate;	// 0x309a089d
- (void)testAutocorrectionPromptWithCorrection:(id)correction;	// 0x30af7991
- (void)textChanged:(id)changed;	// 0x309d3b05
- (void)textDidChange:(id)text;	// 0x309d3af5
- (void)textFrameChanged:(id)changed;	// 0x309dc951
- (int)textInputChangingCount;	// 0x30af7981
- (id)textInputTraits;	// 0x309a94ad
- (void)textWillChange:(id)text;	// 0x309d3a45
- (void)timeElapsed:(unsigned)elapsed message:(id)message;	// 0x309d74a9
- (void)timeMark:(unsigned)mark;	// 0x309d7305
- (void)timeMark:(unsigned)mark message:(id)message;	// 0x309d71ed
- (id)titleForSortingMethod:(id)sortingMethod;	// 0x30af657d
- (void)toggleShift;	// 0x30af3101
- (void)touchAutoDeleteTimerWithThreshold:(double)threshold;	// 0x30af66c1
- (void)touchAutocorrectPromptTimer;	// 0x309b3c19
- (void)touchLongPressTimer;	// 0x309d70e1
- (void)touchLongPressTimerWithDelay:(double)delay;	// 0x309d70f9
- (void)trackUsageForAcceptedAutocorrection:(id)acceptedAutocorrection promptWasShowing:(BOOL)showing;	// 0x30a74fed
- (void)trackUsageForPromptedCorrection:(id)promptedCorrection inputString:(id)string previousPrompt:(id)prompt;	// 0x30af75f9
- (BOOL)typologyEnabled;	// 0x309a5ae9
// declared property getter: - (id)typologyRecorder;	// 0x309a4c01
- (void)updateAutocorrectPrompt:(id)prompt;	// 0x309a2811
- (void)updateAutocorrectPromptAction;	// 0x309c4d15
- (void)updateAutocorrectPromptDisplay:(CGRect)display;	// 0x30af5d95
- (void)updateCandidateDisplay;	// 0x309a2699
- (void)updateCandidateDisplayAsyncWithCandidates:(id)candidates forInputManager:(id)inputManager;	// 0x30af50b5
- (void)updateChangeTimeAndIncrementCount;	// 0x309dc581
- (void)updateDoubleSpacePeriodStateForCharacter:(unsigned long)character;	// 0x30af3455
- (void)updateDoubleSpacePeriodStateForString:(id)string;	// 0x30a0f629
- (void)updateForChangedSelection;	// 0x309a8015
- (void)updateFromTextInputTraits;	// 0x30af7889
- (void)updateInputContextForDeletedText:(id)deletedText toWordRange:(id)wordRange;	// 0x30af2dd5
- (void)updateInputManagerAutocapitalizationType;	// 0x309a1889
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)only;	// 0x30af1db1
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)only preserveIfPossible:(BOOL)possible;	// 0x30af1b55
- (void)updateKeyboardEventsLagging:(GSEventRef)lagging;	// 0x309da179
- (void)updateKeysWithDelegates;	// 0x309b5755
- (void)updateLastUsedInputMode:(id)mode;	// 0x309dc245
- (void)updateLayout;	// 0x309a4c89
- (void)updateLayoutAndSetShift;	// 0x30af3935
- (void)updateLayoutIfNeeded;	// 0x309b6119
- (void)updateLayoutToCurrentInterfaceOrientation;	// 0x30af233d
- (void)updateMarkedTextIfChanged;	// 0x309cbedd
- (void)updateObserverState;	// 0x309d4031
- (void)updateReturnKey;	// 0x30a0f615
- (void)updateReturnKey:(BOOL)key;	// 0x309b3fe1
- (void)updateShiftState;	// 0x309a8e79
- (void)updateTextCandidateView;	// 0x30af547d
- (void)willReplaceTextInRangedSelectionWithKeyboardInput;	// 0x30af454d
@end

