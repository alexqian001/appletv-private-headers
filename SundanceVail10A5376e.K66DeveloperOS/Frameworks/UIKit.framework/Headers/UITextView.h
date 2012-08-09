/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextInput.h"
#import "UITextLinkInteraction.h"
#import "UIScrollView.h"

@class UIFont, WebFrame, UITextRange, NSDictionary, UITextPosition, UIWebDocumentView, UIColor, NSAttributedString, UITextInteractionAssistant, NSString, DOMHTMLElement, UIDelayedAction;
@protocol UITextViewDelegate, UITextInputDelegate, UITextInputTokenizer;

@interface UITextView : UIScrollView <UITextLinkInteraction, UITextInput> {
	WebFrame *m_frame;	// 464 = 0x1d0
	DOMHTMLElement *m_body;	// 468 = 0x1d4
	int m_marginTop;	// 472 = 0x1d8
	UIDelayedAction *m_selectionTimer;	// 476 = 0x1dc
	UIDelayedAction *m_longPressAction;	// 480 = 0x1e0
	BOOL m_editable;	// 484 = 0x1e4
	BOOL m_editing;	// 485 = 0x1e5
	BOOL m_becomesEditableWithGestures;	// 486 = 0x1e6
	BOOL m_reentrancyGuard;	// 487 = 0x1e7
	BOOL m_readyForScroll;	// 488 = 0x1e8
	BOOL m_hasExplicitTextAlignment;	// 489 = 0x1e9
	BOOL m_hasExplicitLineHeight;	// 490 = 0x1ea
	UITextInteractionAssistant *m_interactionAssistant;	// 492 = 0x1ec
	UIWebDocumentView *m_webView;	// 496 = 0x1f0
	UIFont *m_font;	// 500 = 0x1f4
	UIColor *m_textColor;	// 504 = 0x1f8
	int m_textAlignment;	// 508 = 0x1fc
	UIView *m_inputView;	// 512 = 0x200
	UIView *m_inputAccessoryView;	// 516 = 0x204
	float m_lineHeight;	// 520 = 0x208
	BOOL m_skipScrollContainingView;	// 524 = 0x20c
	BOOL m_allowsEditingTextAttributes;	// 525 = 0x20d
	BOOL m_usesAttributedText;	// 526 = 0x20e
	BOOL m_clearsOnInsertion;	// 527 = 0x20f
}
@property(assign, nonatomic) BOOL allowsEditingTextAttributes;	// G=0x303d6155; S=0x3043808d; 
@property(copy, nonatomic) NSAttributedString *attributedText;	// G=0x304380b5; S=0x3043860d; 
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x303c0b3d; S=0x303d5a4d; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x303d6611; 
@property(assign) float bottomBufferHeight;	// G=0x30438f75; S=0x30438e81; converted property
@property(assign, nonatomic) BOOL clearsOnInsertion;	// G=0x303b7e81; S=0x303cd8d9; 
@property(assign, nonatomic) unsigned dataDetectorTypes;	// G=0x303b7bb5; S=0x3034b2cd; 
@property(assign, nonatomic) id<UITextViewDelegate> delegate;	// @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x3034b38d; S=0x303b810d; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x303b5d71; S=0x303b7e71; @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x303d6169; 
@property(retain, nonatomic) UIFont *font;	// G=0x303c1071; S=0x303b58b9; 
@property(retain) UIView *inputAccessoryView;	// G=0x303b7d05; S=0x303b9bc9; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x304393e1; S=0x30439409; 
@property(retain) UIView *inputView;	// G=0x303b7cf1; S=0x303b9bb5; @synthesize=m_inputView
@property(readonly, retain) UITextInteractionAssistant *interactionAssistant;	// G=0x303b5e2d; converted property
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) float lineHeight;	// G=0x30438a41; S=0x303b7571; converted property
@property(assign) int marginTop;	// G=0x303b7625; S=0x303b75fd; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x3034b39d; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x30439325; S=0x3043934d; 
@property(assign) CGPoint offset;	// G=0x30439041; S=0x30439031; converted property
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign) BOOL scrollingEnabled;	// G=0x30439081; S=0x30439071; converted property
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;	// G=0x303b789d; S=0x30438905; 
@property(copy) UITextRange *selectedTextRange;	// G=0x303b7e91; S=0x303cd541; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x30439671; S=0x30439699; 
@property(assign) int selectionGranularity;	// G=0x3043970d; S=0x303cd5bd; converted property
@property(assign) BOOL showScrollerIndicators;	// G=0x30438fe1; S=0x30438fad; converted property
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x303b7635; S=0x303b78d9; 
@property(assign, nonatomic) int textAlignment;	// G=0x304388f5; S=0x303b5efd; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x30438895; S=0x303b5e3d; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x3034b05d; 
@property(copy, nonatomic) NSDictionary *typingAttributes;	// G=0x30437a2d; S=0x30437a4d; 
@property(readonly, retain) UIWebDocumentView *webView;	// G=0x3034b089; converted property
+ (id)_bestInterpretationForDictationResult:(id)dictationResult;	// 0x304379e9
+ (id)excludedElementsForHTML;	// 0x304384f9
- (id)initWithCoder:(id)coder;	// 0x303b4cc5
- (id)initWithFrame:(CGRect)frame;	// 0x3034a489
- (id)initWithFrame:(CGRect)frame font:(id)font;	// 0x303d59d9
- (id)initWithFrame:(CGRect)frame webView:(id)view;	// 0x30437281
- (void)_addShortcut:(id)shortcut;	// 0x30437d39
- (unsigned)_allowedLinkTypes;	// 0x303c0b15
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x3043777d
- (id)_automationValue;	// 0x30439735
- (void)_dealloc;	// 0x303b9a51
- (void)_define:(id)define;	// 0x30437d19
- (id)_findWebViewWordBoundaryFromPosition:(id)position;	// 0x304396c5
- (id)_keyboardResponder;	// 0x303b7d79
- (void)_populateArchivedSubviews:(id)subviews;	// 0x304372d5
- (Class)_printFormatterClass;	// 0x305907dd
- (void)_promptForReplace:(id)replace;	// 0x30437ce1
- (id)_proxyTextInput;	// 0x3034b009
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x303b7d49
- (void)_setDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x304378ad
- (void)_showTextStyleOptions:(id)options;	// 0x30437db9
- (void)_transferAttribute:(id)attribute fromString:(id)string andSetPropertyWith:(SEL)with usingValueClass:(Class)aClass;	// 0x30438379
- (void)_transferTextViewPropertiesFromText:(id)text;	// 0x304383d1
- (void)_updateForNewSize:(CGSize)newSize withOldSize:(CGSize)oldSize;	// 0x3034a5f5
// declared property getter: - (BOOL)allowsEditingTextAttributes;	// 0x303d6155
// declared property getter: - (id)attributedText;	// 0x304380b5
- (id)automaticallySelectedOverlay;	// 0x303da139
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x30439495
- (BOOL)becomeFirstResponder;	// 0x303b6fa9
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x303c0b3d
- (void)beginSelectionChange;	// 0x303b82fd
// declared property getter: - (id)beginningOfDocument;	// 0x303d6611
// converted property getter: - (float)bottomBufferHeight;	// 0x30438f75
- (BOOL)canBecomeFirstResponder;	// 0x303b7379
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x303d64c9
- (BOOL)canResignFirstResponder;	// 0x303b8c41
- (void)cancelDataDetectorsWithWebLock;	// 0x303b9b69
- (void)cancelInteractionWithLink;	// 0x30438c3d
- (CGRect)caretRectForPosition:(id)position;	// 0x303b85e9
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x304395fd
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x30439465
// declared property getter: - (BOOL)clearsOnInsertion;	// 0x303b7e81
- (id)closestPositionToPoint:(CGPoint)point;	// 0x303cd46d
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x30439581
- (void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;	// 0x3034a7cd
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x303cd4e1
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x304377bd
- (id)contentAsHTMLString;	// 0x303d9059
- (void)copy:(id)copy;	// 0x30437c4d
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x30437a7d
- (void)cut:(id)cut;	// 0x30437c2d
// declared property getter: - (unsigned)dataDetectorTypes;	// 0x303b7bb5
- (void)dealloc;	// 0x303b9931
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x3043982d
- (void)delayedUpdateForKeyboardDidShow;	// 0x303b89f9
- (void)deleteBackward;	// 0x30439171
- (void)didMoveToSuperview;	// 0x303b5f79
- (void)disableClearsOnInsertion;	// 0x303cd8c1
- (void)displayScrollerIndicators;	// 0x30439021
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x30437ddd
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x30439745
- (void)encodeWithCoder:(id)coder;	// 0x30437329
// declared property getter: - (id)endOfDocument;	// 0x303d6169
- (void)endSelectionChange;	// 0x303b8559
- (void)ensureSelection;	// 0x303b7f59
- (CGRect)firstRectForRange:(id)range;	// 0x304394f5
// declared property getter: - (id)font;	// 0x303c1071
- (void)forwardInvocation:(id)invocation;	// 0x303b7c65
- (CGRect)frameForDictationResultPlaceholder:(id)dictationResultPlaceholder;	// 0x30439281
- (BOOL)hasText;	// 0x304388d1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x303c1161
// declared property getter: - (id)inputAccessoryView;	// 0x303b7d05
// declared property getter: - (id)inputDelegate;	// 0x304393e1
// declared property getter: - (id)inputView;	// 0x303b7cf1
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x304391c5
- (id)insertDictationResultPlaceholder;	// 0x30439229
- (void)insertText:(id)text;	// 0x30439199
// converted property getter: - (id)interactionAssistant;	// 0x303b5e2d
- (BOOL)isAccessibilityElementByDefault;	// 0x304afc41
// declared property getter: - (BOOL)isEditable;	// 0x3034b38d
// declared property getter: - (BOOL)isEditing;	// 0x303b5d71
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x304afc45
- (BOOL)isFirstResponder;	// 0x303b7321
- (BOOL)isInteractingWithLink;	// 0x303c119d
- (void)keyboardDidShow:(id)keyboard;	// 0x303b89c5
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x303cd5e9
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x303da521
- (BOOL)keyboardInputChanged:(id)changed;	// 0x303cd9a1
- (void)keyboardInputChangedSelection:(id)selection;	// 0x303b7d89
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x30438ca9
// converted property getter: - (float)lineHeight;	// 0x30438a41
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x30437be9
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x30437bc9
// converted property getter: - (int)marginTop;	// 0x303b7625
// declared property getter: - (id)markedTextRange;	// 0x3034b39d
// declared property getter: - (id)markedTextStyle;	// 0x30439325
- (id)metadataDictionariesForDictationResults;	// 0x304392c5
- (id)methodSignatureForSelector:(SEL)selector;	// 0x303b7c15
- (BOOL)mightHaveLinks;	// 0x303c0af9
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x30437aa1
// converted property getter: - (CGPoint)offset;	// 0x30439041
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x303cd511
- (void)paste:(id)paste;	// 0x30437c6d
- (void)performBecomeEditableTasks;	// 0x303b7ed1
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x304393b1
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x303b85b9
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x30439435
- (void)recalculateStyle;	// 0x303b5995
- (CGRect)rectForSelection:(NSRange)selection;	// 0x30437ff1
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x3034b1d9
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)result;	// 0x30439251
- (void)removeFromSuperview;	// 0x303b98c1
- (void)replace:(id)replace;	// 0x30437c09
- (void)replaceRange:(id)range withText:(id)text;	// 0x304392f1
- (void)resetDataDetectorsResultsWithWebLock;	// 0x303c1025
- (BOOL)resignFirstResponder;	// 0x303b8a95
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3034a4dd
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x30438a51
- (void)scrollRectToVisibleInContainingScrollView;	// 0x303b8439
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x303b8359
- (void)scrollToMakeCaretVisible:(BOOL)makeCaretVisible;	// 0x30439161
// converted property getter: - (BOOL)scrollingEnabled;	// 0x30439081
- (void)select:(id)select;	// 0x30437c8d
- (void)selectAll;	// 0x30437ba1
- (void)selectAll:(id)all;	// 0x30437cb5
// declared property getter: - (NSRange)selectedRange;	// 0x303b789d
- (id)selectedText;	// 0x30437b65
// declared property getter: - (id)selectedTextRange;	// 0x303b7e91
// declared property getter: - (int)selectionAffinity;	// 0x30439671
// converted property getter: - (int)selectionGranularity;	// 0x3043970d
- (id)selectionRectsForRange:(id)range;	// 0x303d6191
- (id)selectionView;	// 0x30437b3d
// declared property setter: - (void)setAllowsEditingTextAttributes:(BOOL)attributes;	// 0x3043808d
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x30439099
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x30439061
// declared property setter: - (void)setAttributedText:(id)text;	// 0x3043860d
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x304394c5
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x303d5a4d
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x30438e81
- (void)setBounds:(CGRect)bounds;	// 0x303b73e9
- (void)setCenter:(CGPoint)center;	// 0x30437e3d
// declared property setter: - (void)setClearsOnInsertion:(BOOL)insertion;	// 0x303cd8d9
- (void)setContentToHTMLString:(id)htmlstring;	// 0x303d5bed
// declared property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x3034b2cd
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x303b810d
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x303b7e71
// declared property setter: - (void)setFont:(id)font;	// 0x303b58b9
- (void)setFrame:(CGRect)frame;	// 0x3034a561
- (void)setHidesSelection:(BOOL)selection;	// 0x30437a25
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x303b9bc9
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x30439409
// declared property setter: - (void)setInputView:(id)view;	// 0x303b9bb5
// converted property setter: - (void)setLineHeight:(float)height;	// 0x303b7571
// converted property setter: - (void)setMarginTop:(int)top;	// 0x303b75fd
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x30439379
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x3043934d
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x30439031
- (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x304390a9
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x30439071
// declared property setter: - (void)setSelectedRange:(NSRange)range;	// 0x30438905
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x303cd541
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x30439699
// converted property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x303cd5bd
- (void)setSelectionToEnd;	// 0x303b7fe1
- (void)setSelectionToStart;	// 0x30437ef5
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x30438fad
// declared property setter: - (void)setText:(id)text;	// 0x303b78d9
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x303b5efd
// declared property setter: - (void)setTextColor:(id)color;	// 0x303b5e3d
// declared property setter: - (void)setTypingAttributes:(id)attributes;	// 0x30437a4d
- (BOOL)shouldScrollEnclosingScrollView;	// 0x303b5d85
- (BOOL)shouldStartDataDetectors;	// 0x303b7bd5
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x30438fe1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x303c0ea5
- (void)startDataDetectorsWithWebLock;	// 0x303c0b69
- (void)startInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30438bdd
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30438c5d
- (id)styleString;	// 0x3034adad
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x303d605d
- (void)tapLinkAtPoint:(CGPoint)point;	// 0x30438bbd
// declared property getter: - (id)text;	// 0x303b7635
// declared property getter: - (int)textAlignment;	// 0x304388f5
// declared property getter: - (id)textColor;	// 0x30438895
- (id)textInRange:(id)range;	// 0x303cd43d
- (id)textInputTraits;	// 0x3034a53d
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x303cd409
- (CGSize)tileSizeForSize:(CGSize)size;	// 0x3034af85
- (void)toggleBoldface:(id)boldface;	// 0x30437d59
- (void)toggleItalics:(id)italics;	// 0x30437d79
- (void)toggleUnderline:(id)underline;	// 0x30437d99
// declared property getter: - (id)tokenizer;	// 0x3034b05d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x303c11e5
// declared property getter: - (id)typingAttributes;	// 0x30437a2d
- (id)undoManager;	// 0x303cd6c9
- (id)undoManagerForWebView:(id)webView;	// 0x303cd6b9
- (void)unmarkText;	// 0x303cdb01
- (void)updateContentEditableAttribute:(BOOL)attribute;	// 0x3034b24d
- (void)updateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30438bfd
- (void)updateSelection;	// 0x30437b05
- (void)updateWebViewObjects;	// 0x3034b099
- (void)validateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30438c1d
- (CGRect)visibleRect;	// 0x303d5f7d
- (CGRect)visibleTextRect;	// 0x303d5e99
// converted property getter: - (id)webView;	// 0x3034b089
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x30438d8d
- (void)webViewDidChange:(id)webView;	// 0x303b5a01
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)point;	// 0x30438c81
@end
