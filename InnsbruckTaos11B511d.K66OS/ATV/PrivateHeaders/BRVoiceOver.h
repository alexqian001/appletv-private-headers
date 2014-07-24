/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"

@class NSTimer, NSString, BRVoiceOverSpeechManager, NSDictionary, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRVoiceOver : BRSingleton {
	NSTimer *_focusChangeTimer;	// 4 = 0x4
	NSTimer *_screenContentTimer;	// 8 = 0x8
	NSDictionary *_languageToLocale;	// 12 = 0xc
	NSMutableArray *_focusChain;	// 16 = 0x10
	BRVoiceOverSpeechManager *_speechManager;	// 20 = 0x14
	BOOL _isEnabled;	// 24 = 0x18
	BOOL *_handleFocusChangeCancel;	// 28 = 0x1c
	int _speechRate;	// 32 = 0x20
	BOOL _inRereadMode;	// 36 = 0x24
	id _focusChangeObserver;	// 40 = 0x28
	id _noFocusChangeObserver;	// 44 = 0x2c
	NSDictionary *_phoneticsTable;	// 48 = 0x30
	int _lastEvent;	// 52 = 0x34
	double _lastEventTime;	// 56 = 0x38
	id _lastFocusedElement;	// 64 = 0x40
	NSString *_previousContainerString;	// 68 = 0x44
	NSMutableArray *_previousContainerStrings;	// 72 = 0x48
	NSString *_previousSecondaryScreenInfo;	// 76 = 0x4c
	NSString *_previousContextChangeString;	// 80 = 0x50
	NSArray *_previousElementTraits;	// 84 = 0x54
	NSString *_previousTextFieldValue;	// 88 = 0x58
	NSArray *_nonFocusableNavigationElements;	// 92 = 0x5c
	int _nonFocusedElementIndex;	// 96 = 0x60
	int _nonFocusedSubelementIndex;	// 100 = 0x64
	NSString *_initialText;	// 104 = 0x68
	id _initialTextControl;	// 108 = 0x6c
}
@property(readonly, assign) BOOL inRereadMode;	// G=0x306bf1; converted property
@property(assign, nonatomic) BOOL isEnabled;	// G=0x30a04d; S=0x306c01; @synthesize=_isEnabled
@property(assign, nonatomic) BOOL isPitchChangeEnabled;	// G=0x306951; S=0x306975; @dynamic
@property(readonly, assign, nonatomic) BOOL isSpeaking;	// G=0x306165; 
@property(assign, nonatomic) BOOL speechEnabled;	// G=0x306141; S=0x306121; @dynamic
@property(assign, nonatomic) int speechRate;	// G=0x306a0d; S=0x306a55; @synthesize=_speechRate
+ (BOOL)isEnabled;	// 0x305771
+ (void)setSingleton:(id)singleton;	// 0x305791
+ (id)singleton;	// 0x305781
- (id)init;	// 0x3057a1
- (BOOL)_accessibilityIgnoresControlReload:(id)reload;	// 0x30907d
- (NSRange)_accessibilityRangeForControl:(id)control;	// 0x308215
- (BOOL)_canSpeakLanguage:(id)language;	// 0x3083e1
- (void)_chapterMarkersHidden:(id)hidden;	// 0x306319
- (void)_chapterMarkersShown:(id)shown;	// 0x3062d5
- (void)_clearCachedElementInformation;	// 0x307ec9
- (void)_coalesceHandleFocusChange:(id)change;	// 0x3090c9
- (void)_contextDidChange:(id)_context;	// 0x309529
- (id)_determineAccessibilityLanguage:(id)language;	// 0x30819d
- (id)_determineControlTraits:(id)traits;	// 0x307965
- (id)_determineKeyboardType:(id)type;	// 0x3080ed
- (id)_determineScreenChangeLabel:(id)label;	// 0x307125
- (id)_determineScreenSecondaryInfo:(id)info;	// 0x3078e1
- (id)_determineTextFieldData:(id)data;	// 0x306ef9
- (id)_focusChain:(id)chain;	// 0x309f91
- (void)_handleFocusChange:(id)change;	// 0x3098bd
- (void)_handleFocusDidNotChange:(id)_handleFocus;	// 0x30905d
- (BOOL)_handleNonFocusableNavigation:(int)navigation;	// 0x306595
- (void)_handleRereadMode;	// 0x3097cd
- (void)_handleScreenContentOutput:(id)output;	// 0x307d51
- (void)_initialize;	// 0x305a05
- (void)_languageChanged:(id)changed;	// 0x306189
- (id)_makeFocusChain:(id)chain;	// 0x306e95
- (int)_maxElementCountWithinElement:(id)element;	// 0x30652d
- (void)_mediaContentSkipped:(id)skipped;	// 0x30620d
- (id)_nonFocusedTableViewHeaders:(id)headers;	// 0x30635d
- (void)_outputControl:(id)control oldControl:(id)control2;	// 0x3084c9
- (id)_phoneticLetterForControl:(id)control;	// 0x308039
- (id)_replacePasswordBullets:(id)bullets;	// 0x309a91
- (void)_scheduleScreenContentOutputTimerForControl:(id)control cacheOnly:(BOOL)only;	// 0x307bd5
- (BOOL)_shouldSkipOutputForNewControl:(id)newControl oldControl:(id)control;	// 0x308f0d
- (void)_startSpeechManager;	// 0x30599d
- (id)_tableViewRow:(id)row row:(int)row2;	// 0x306415
- (void)_tearDown;	// 0x305e81
- (void)_updateFocusChain:(id)chain;	// 0x307fe5
- (void)_updateFocusedElement:(id)element;	// 0x308fad
- (void)_updateSpeechRate;	// 0x3069dd
- (int)_wrapSoundForNewControl:(id)newControl oldControl:(id)control;	// 0x308301
- (void)clearSpeechQueue;	// 0x307f79
- (void)dealloc;	// 0x306099
- (void)dispatchSpeechJob:(id)job shouldQueue:(BOOL)queue;	// 0x307749
- (BOOL)handleEventAction:(id)action;	// 0x3067fd
// converted property getter: - (BOOL)inRereadMode;	// 0x306bf1
// declared property getter: - (BOOL)isEnabled;	// 0x30a04d
// declared property getter: - (BOOL)isPitchChangeEnabled;	// 0x306951
// declared property getter: - (BOOL)isSpeaking;	// 0x306165
- (void)playSound:(int)sound;	// 0x3082e5
- (void)setInitialText:(id)text forControl:(id)control;	// 0x3099fd
// declared property setter: - (void)setIsEnabled:(BOOL)enabled;	// 0x306c01
- (void)setIsEnabled:(BOOL)enabled quiet:(BOOL)quiet;	// 0x306c15
// declared property setter: - (void)setIsPitchChangeEnabled:(BOOL)enabled;	// 0x306975
// declared property setter: - (void)setSpeechEnabled:(BOOL)enabled;	// 0x306121
// declared property setter: - (void)setSpeechRate:(int)rate;	// 0x306a55
- (void)speakBluetoothOOBMessage;	// 0x306b69
- (void)speakGreetingMessage;	// 0x306ae1
- (void)speakString:(id)string;	// 0x309f29
// declared property getter: - (BOOL)speechEnabled;	// 0x306141
// declared property getter: - (int)speechRate;	// 0x306a0d
- (void)textChanged:(id)changed;	// 0x309bb5
- (void)updateStatus;	// 0x3058f9
@end
