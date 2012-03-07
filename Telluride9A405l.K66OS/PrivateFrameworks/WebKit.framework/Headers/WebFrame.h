/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebFramePrivate;

@interface WebFrame : NSObject {
@private
	WebFramePrivate *_private;	// 4 = 0x4
}
@property(assign) BOOL isSingleLine;	// G=0x353bdad1; S=0x3539abb5; converted property
@property(assign) BOOL mediaDataLoadsAutomatically;	// G=0x353b41f5; S=0x353b422d; converted property
+ (PassRefPtr<WebCore::Frame>)_createFrameWithPage:(Page *)page frameName:(const String *)name frameView:(id)view ownerElement:(HTMLFrameOwnerElement *)element;	// 0x353761e9
+ (void)_createMainFrameWithPage:(Page *)page frameName:(const String *)name frameView:(id)view;	// 0x35376199
+ (void)_createMainFrameWithSimpleHTMLDocumentWithPage:(Page *)page frameView:(id)view style:(id)style;	// 0x3539a795
+ (PassRefPtr<WebCore::Frame>)_createSubframeWithOwnerElement:(HTMLFrameOwnerElement *)ownerElement frameName:(const String *)name frameView:(id)view;	// 0x3538fb61
+ (id)stringWithData:(id)data textEncodingName:(id)name;	// 0x353bbf31
- (id)init;	// 0x353b40b1
- (id)initWithName:(id)name webFrameView:(id)view webView:(id)view3;	// 0x353b40b5
- (id)DOMDocument;	// 0x3538a4c1
- (BOOL)_allowsFollowingLink:(id)link;	// 0x353bb475
- (void)_attachScriptDebugger;	// 0x353b52f9
- (CGColorRef)_bodyBackgroundColor;	// 0x3538aba1
- (id)_cacheabilityDictionary;	// 0x353bb1b5
- (BOOL)_canProvideDocumentSource;	// 0x353b7f21
- (BOOL)_canSaveAsWebArchive;	// 0x353b44dd
- (CGRect)_caretRectAtPosition:(const Position *)position affinity:(int)affinity;	// 0x353b6465
- (id)_characterRangeAtPoint:(CGPoint)point;	// 0x353b7c95
- (void)_clearCoreFrame;	// 0x35395ded
- (void)_clearOpener;	// 0x353bbc35
- (void)_clearSelection;	// 0x353b43d5
- (void)_clearSelectionInOtherFrames;	// 0x353b4441
- (void)_commitData:(id)data;	// 0x35389e81
- (id)_computePageRectsWithPrintScaleFactor:(float)printScaleFactor pageSize:(CGSize)size;	// 0x353bbc65
- (NSRange)_convertDOMRangeToNSRange:(id)nsrange;	// 0x3539fd9d
- (id)_convertNSRangeToDOMRange:(NSRange)domrange;	// 0x353b6875
- (PassRefPtr<WebCore::Range>)_convertToDOMRange:(NSRange)domrange;	// 0x353b67dd
- (NSRange)_convertToNSRange:(Range *)nsrange;	// 0x3539ec81
- (id)_dataSource;	// 0x35376e31
- (void)_detachScriptDebugger;	// 0x353b3f11
- (void)_dispatchDidReceiveTitle:(id)_dispatch;	// 0x353b54e9
- (id)_documentFragmentForImageData:(id)imageData withRelativeURLPart:(id)relativeURLPart andMIMEType:(id)type;	// 0x353b465d
- (id)_documentFragmentForText:(id)text;	// 0x353bab6d
- (id)_documentFragmentForWebArchive:(id)webArchive;	// 0x353b4631
- (id)_documentFragmentWithMarkupString:(id)markupString baseURLString:(id)string;	// 0x353b74ad
- (id)_documentFragmentWithNodesAsParagraphs:(id)nodesAsParagraphs;	// 0x353b76cd
- (void)_drawRect:(CGRect)rect contentsOnly:(BOOL)only;	// 0x35384b9d
- (id)_findFrameWithSelection;	// 0x353b5439
- (BOOL)_firstLayoutDone;	// 0x353b80c9
- (CGRect)_firstRectForDOMRange:(id)domrange;	// 0x353b654d
- (BOOL)_getVisibleRect:(CGRect *)rect;	// 0x353b607d
- (OpaqueJSContext *)_globalContextForScriptWorld:(id)scriptWorld;	// 0x35392cf9
- (void)_handleKeyEvent:(id)event;	// 0x353b9131
- (BOOL)_hasSelection;	// 0x353b4275
- (id)_initWithWebFrameView:(id)webFrameView webView:(id)view;	// 0x35376571
- (void)_insertParagraphSeparatorInQuotedContent;	// 0x353b7aa1
- (id)_internalLoadDelegate;	// 0x353b3f6d
- (BOOL)_isCommitting;	// 0x353849f5
- (BOOL)_isDescendantOfFrame:(id)frame;	// 0x353b807d
- (BOOL)_isDisplayingStandaloneImage;	// 0x353b40f9
- (BOOL)_isFrameSet;	// 0x353b40b9
- (BOOL)_isIncludedInWebKitStatistics;	// 0x35376795
- (BOOL)_isVisuallyNonEmpty;	// 0x3538a1cd
- (id)_layerTreeAsText;	// 0x353bba91
- (void)_loadData:(id)data MIMEType:(id)type textEncodingName:(id)name baseURL:(id)url unreachableURL:(id)url5;	// 0x353b4b05
- (void)_loadHTMLString:(id)string baseURL:(id)url unreachableURL:(id)url3;	// 0x353b474d
- (int)_loadType;	// 0x3538a1fd
- (BOOL)_loadsSynchronously;	// 0x353b401d
- (id)_markDOMRange;	// 0x353b6979
- (id)_markupStringFromRange:(id)range nodes:(id *)nodes;	// 0x353b5cb5
- (BOOL)_needsLayout;	// 0x3537c251
- (id)_nodesFromList:(Vector<WebCore::Node*,0ul> *)list;	// 0x353b5c4d
- (unsigned)_numberOfActiveAnimations;	// 0x353b8ce5
- (BOOL)_pauseAnimation:(id)animation onNode:(id)node atTime:(double)time;	// 0x353b88d1
- (BOOL)_pauseSVGAnimation:(id)animation onSMILNode:(id)node atTime:(double)time;	// 0x353b8b71
- (BOOL)_pauseTransitionOfProperty:(id)property onNode:(id)node atTime:(double)time;	// 0x353b8a21
- (unsigned)_pendingFrameUnloadEventCount;	// 0x353b88a5
- (id)_rectsForRange:(id)range;	// 0x353b80f5
- (void)_replaceSelectionWithFragment:(id)fragment selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace matchStyle:(BOOL)style;	// 0x353baf2d
- (void)_replaceSelectionWithMarkupString:(id)markupString baseURLString:(id)string selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace;	// 0x353b45f5
- (void)_replaceSelectionWithNode:(id)node selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace matchStyle:(BOOL)style;	// 0x353b7959
- (void)_replaceSelectionWithText:(id)text selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace;	// 0x353ba935
- (void)_replaceSelectionWithText:(id)text selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace matchStyle:(BOOL)style;	// 0x353ba6fd
- (void)_replaceSelectionWithWebArchive:(id)webArchive selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace;	// 0x353bad79
- (void)_restoreViewState;	// 0x353b4089
- (void)_resumeAnimations;	// 0x353baef9
- (void)_saveViewState;	// 0x353b4139
- (void)_scrollDOMRangeToVisible:(id)visible;	// 0x353b664d
- (void)_scrollDOMRangeToVisible:(id)visible withInset:(float)inset;	// 0x353b6705
- (void)_selectAll;	// 0x353b915d
- (void)_selectNSRange:(NSRange)range;	// 0x353b86c9
- (NSRange)_selectedNSRange;	// 0x3539eb5d
- (id)_selectedString;	// 0x353b5ed5
- (int)_selectionGranularity;	// 0x353b3fad
- (id)_selectionRangeForFirstPoint:(CGPoint)firstPoint secondPoint:(CGPoint)point;	// 0x353b82e9
- (id)_selectionRangeForPoint:(CGPoint)point;	// 0x353b8515
- (void)_setExcludeFromTextSearch:(bool)textSearch;	// 0x353b4065
- (void)_setInternalLoadDelegate:(id)delegate;	// 0x353b3f4d
- (void)_setIsCommitting:(BOOL)committing;	// 0x353b3f8d
- (void)_setIsDisconnected:(bool)disconnected;	// 0x353b4041
- (void)_setLoadsSynchronously:(BOOL)synchronously;	// 0x353b3ff1
- (void)_setProhibitsScrolling:(BOOL)scrolling;	// 0x353b4165
- (void)_setSelectionFromNone;	// 0x353b9185
- (void)_setShouldCreateRenderers:(BOOL)_set;	// 0x353b3fd1
- (void)_setTypingStyle:(id)style withUndoAction:(int)undoAction;	// 0x353b7ee1
- (void)_setVisibleSize:(CGSize)size;	// 0x3537d231
- (BOOL)_shouldFlattenCompositingLayers:(CGContextRef)layers;	// 0x35384d95
- (id)_smartDeleteRangeForProposedRange:(id)proposedRange;	// 0x353b6c05
- (id)_stringByEvaluatingJavaScriptFromString:(id)string;	// 0x353b44b9
- (id)_stringByEvaluatingJavaScriptFromString:(id)string forceUserGesture:(BOOL)gesture;	// 0x353b60e1
- (id)_stringByEvaluatingJavaScriptFromString:(id)string withGlobalObject:(OpaqueJSValue *)globalObject inScriptWorld:(id)scriptWorld;	// 0x353bb591
- (id)_stringForRange:(id)range;	// 0x353a0e65
- (id)_stringWithDocumentTypeStringAndMarkupString:(id)documentTypeStringAndMarkupString;	// 0x353b5a05
- (void)_suspendAnimations;	// 0x353baec5
- (id)_typingStyle;	// 0x353b7dc1
- (void)_unmarkAllBadGrammar;	// 0x353b549d
- (void)_unmarkAllMisspellings;	// 0x3539c259
- (void)_updateBackgroundAndUpdatesWhileOffscreen;	// 0x35377a8d
- (VisiblePosition)_visiblePositionForPoint:(CGPoint)point;	// 0x353b7af5
- (id)accessibilityRoot;	// 0x3539c159
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;	// 0x353c1a25
- (id)approximateNodeAtViewportLocation:(CGPoint *)viewportLocation;	// 0x35399b69
- (CGRect)caretRect;	// 0x3539b8fd
- (CGRect)caretRectAtNode:(id)node offset:(int)offset affinity:(int)affinity;	// 0x353b6a89
- (CGRect)caretRectForPosition:(id)position;	// 0x3539bfd5
- (unsigned short)characterAfterCaretSelection;	// 0x353b96c9
- (unsigned short)characterBeforeCaretSelection;	// 0x353b9699
- (unsigned short)characterInRelationToCaretSelection:(int)caretSelection;	// 0x353b9669
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x353b45c5
- (id)childFrames;	// 0x353948b1
- (void)clearPPTStats;	// 0x35398fe5
- (void)clearRangedSelectionInitialExtent;	// 0x353bffb1
- (void)clearSelection;	// 0x353be0a1
- (CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;	// 0x353be0c5
- (VisiblePosition)closestWordBoundary:(VisiblePosition)boundary;	// 0x353bdb19
- (void)collapseSelection;	// 0x353be8f1
- (void)confirmMarkedText:(id)text;	// 0x353a0a0d
- (NSRange)convertDOMRangeToNSRange:(id)nsrange;	// 0x353b65ad
- (NSRange)convertDOMRangeToNSRange:(id)nsrange;	// 0x3539fd85
- (id)convertNSRangeToDOMRange:(NSRange)domrange;	// 0x353b44cd
- (id)convertNSRangeToDOMRange:(NSRange)domrange;	// 0x353b45d5
- (Frame *)coreFrame;	// 0x3538fd89
- (id)counterValueForElement:(id)element;	// 0x353a9509
- (void)createDefaultFieldEditorDocumentStructure;	// 0x3539ab8d
- (id)dataSource;	// 0x35382dc9
- (void)dealloc;	// 0x35395eed
- (id)dictationResultMetadataForRange:(id)range;	// 0x353ba611
- (id)documentView;	// 0x35399bb9
- (id)elementRangeContainingCaretSelection;	// 0x353b94f9
- (id)endPosition;	// 0x3539ecad
- (void)ensureRangedSelectionContainsInitialStartPoint:(CGPoint)point initialEndPoint:(CGPoint)point2;	// 0x353bf2a5
- (void)expandSelectionToElementContainingCaretSelection;	// 0x353b94d1
- (void)expandSelectionToSentence;	// 0x353c2475
- (void)expandSelectionToStartOfWordContainingCaretSelection;	// 0x353b9641
- (void)expandSelectionToWordContainingCaretSelection;	// 0x353b9619
- (void)extendSelection:(BOOL)selection;	// 0x353beba9
- (void)finalize;	// 0x353b5299
- (id)findFrameNamed:(id)named;	// 0x353b489d
- (CGRect)firstRectForDOMRange:(id)domrange;	// 0x353b65c5
- (BOOL)focusedNodeHasContent;	// 0x3539ad99
- (GSFontRef)fontForSelection:(BOOL *)selection;	// 0x353ba6a9
- (void)forceLayoutAdjustingViewSize:(BOOL)size;	// 0x353b90d9
- (unsigned)formElementsCharacterCount;	// 0x353b8d21
- (id)frameElement;	// 0x353b522d
- (id)frameView;	// 0x35377c81
- (void)getDictationResultRanges:(id *)ranges andMetadatas:(id *)metadatas;	// 0x353ba16d
- (void)getPPTStatsWithParseCount:(unsigned *)parseCount withLayoutCount:(unsigned *)layoutCount withForcedLayoutCount:(unsigned *)forcedLayoutCount withParseDuration:(double *)parseDuration withLayoutDuration:(double *)layoutDuration;	// 0x35399015
- (OpaqueJSContext *)globalContext;	// 0x353b4829
- (BOOL)hasEditableSelection;	// 0x3539eae5
- (BOOL)hasGrammarMarker:(int)marker length:(int)length;	// 0x353bbbf9
- (BOOL)hasRichlyEditableSelection;	// 0x353bb189
- (BOOL)hasSelection;	// 0x35394f65
- (BOOL)hasSpellingMarker:(int)marker length:(int)length;	// 0x353bbbbd
- (CGImageRef)imageForNode:(id)node allowDownsampling:(BOOL)downsampling drawContentBehindTransparentNodes:(BOOL)nodes;	// 0x353c42b1
- (int)innerLineHeight:(id)height;	// 0x353b9335
- (id)interpretationsForCurrentRoot;	// 0x353ba145
- (bool)isPageBoxVisible:(int)visible;	// 0x353a9795
// converted property getter: - (BOOL)isSingleLine;	// 0x353bdad1
- (BOOL)isTelephoneNumberParsingAllowed;	// 0x353b9411
- (BOOL)isTelephoneNumberParsingEnabled;	// 0x353b9441
- (int)layoutCount;	// 0x353b41a1
- (void)loadAlternateHTMLString:(id)string baseURL:(id)url forUnreachableURL:(id)unreachableURL;	// 0x353b47c5
- (void)loadArchive:(id)archive;	// 0x353b49e1
- (void)loadData:(id)data MIMEType:(id)type textEncodingName:(id)name baseURL:(id)url;	// 0x353b4711
- (void)loadHTMLString:(id)string baseURL:(id)url;	// 0x353b47a1
- (void)loadRequest:(id)request;	// 0x35381f95
- (id)markedTextDOMRange;	// 0x3539baf1
// converted property getter: - (BOOL)mediaDataLoadsAutomatically;	// 0x353b41f5
- (void)moveSelectionToEnd;	// 0x353c163d
- (void)moveSelectionToPoint:(CGPoint)point;	// 0x353beaa1
- (void)moveSelectionToStart;	// 0x353c1831
- (id)name;	// 0x353b525d
- (BOOL)needsLayout;	// 0x353b44f5
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x353c4c5d
- (int)numberOfPages:(float)pages :(float)arg2;	// 0x353a9635
- (int)pageNumberForElement:(id)element :(float)arg2 :(float)arg3;	// 0x353a960d
- (id)pageProperty:(const char *)property :(int)arg2;	// 0x353a9671
- (id)pageSizeAndMarginsInPixels:(int)pixels :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7;	// 0x353a97c1
- (id)parentFrame;	// 0x3539219d
- (int)preferredHeight;	// 0x353b930d
- (void)prepareForPause;	// 0x353b8d49
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x353c4301
- (void)printToCGContext:(CGContextRef)cgcontext :(float)arg2 :(float)arg3;	// 0x353a98f9
- (id)provisionalDataSource;	// 0x35383471
- (id)rangeByExtendingCurrentSelection:(int)selection;	// 0x353b9a99
- (id)rangeByMovingCurrentSelection:(int)selection;	// 0x353b9975
- (CGRect)rectForScrollToVisible;	// 0x353b9395
- (void)recursiveSetUpdateAppearanceEnabled:(BOOL)enabled;	// 0x353ba671
- (void)reload;	// 0x353a0ca1
- (void)reloadFromOrigin;	// 0x353b49bd
- (void)removeUnchangeableStyles;	// 0x353bb165
- (CGRect)renderRectForPoint:(CGPoint)point isReplaced:(BOOL *)replaced fontSize:(float *)size;	// 0x353b92a9
- (id)renderTreeAsExternalRepresentationForPrinting:(BOOL)printing;	// 0x353a93e1
- (BOOL)renderedCharactersExceed:(unsigned)exceed;	// 0x3538fd65
- (CGSize)renderedSizeOfNode:(id)node constrainedToWidth:(float)width;	// 0x353b65dd
- (void)resetSelection;	// 0x353b8861
- (void)resetTextAutosizingBeforeLayout;	// 0x3537c01d
- (void)resumeFromPause;	// 0x353b8ddd
- (void)revealSelectionAtExtent:(BOOL)extent;	// 0x3539b929
- (id)scrollableNodeAtViewportLocation:(CGPoint)viewportLocation;	// 0x353b9265
- (void)selectNSRange:(NSRange)range;	// 0x353b4595
- (void)selectNSRange:(NSRange)range onElement:(id)element;	// 0x3539b359
- (void)selectWithoutClosingTypingNSRange:(NSRange)range;	// 0x353b8e71
- (id)selectedDOMRange;	// 0x3539b7b5
- (NSRange)selectedNSRange;	// 0x353b6595
- (int)selectionAffinity;	// 0x3539b8d5
- (BOOL)selectionAtDocumentStart;	// 0x353b98b5
- (BOOL)selectionAtSentenceStart;	// 0x353b98f5
- (BOOL)selectionAtWordStart;	// 0x353b9935
- (int)selectionBaseWritingDirection;	// 0x3539e9cd
- (id)selectionRects;	// 0x353bfc9d
- (id)selectionRectsForCoreRange:(Range *)coreRange;	// 0x353bf979
- (id)selectionRectsForRange:(id)range;	// 0x353bfc75
- (int)selectionState;	// 0x35394f85
- (void)sendOrientationChangeEvent:(int)event;	// 0x3538f359
- (void)sendScrollEvent;	// 0x35399535
- (void)setAccessibleName:(id)name;	// 0x353bb94d
- (void)setBaseWritingDirection:(int)direction;	// 0x3539e959
- (void)setCaretColor:(CGColorRef)color;	// 0x353b93c1
- (void)setDictationPhrases:(id)phrases metadata:(id)metadata asChildOfElement:(id)element;	// 0x353b9fb1
- (void)setIsActive:(BOOL)active;	// 0x3539abd9
// converted property setter: - (void)setIsSingleLine:(BOOL)line;	// 0x3539abb5
- (void)setMarkedText:(id)text forCandidates:(BOOL)candidates;	// 0x353b9dc1
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x353b9bbd
// converted property setter: - (void)setMediaDataLoadsAutomatically:(BOOL)automatically;	// 0x353b422d
- (void)setNeedsLayout;	// 0x353b9231
- (void)setPluginsPaused:(BOOL)paused;	// 0x353b4531
- (void)setRangedSelectionBaseToCurrentSelection;	// 0x353bff5d
- (void)setRangedSelectionBaseToCurrentSelectionEnd;	// 0x353bff95
- (void)setRangedSelectionBaseToCurrentSelectionStart;	// 0x353bff79
- (BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start allowFlipping:(BOOL)flipping;	// 0x353c0399
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;	// 0x353bffe9
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;	// 0x353bffcd
- (void)setRangedSelectionWithExtentPoint:(CGPoint)extentPoint;	// 0x353c0005
- (void)setSelectedDOMRange:(id)range affinity:(int)affinity closeTyping:(BOOL)typing;	// 0x353b9471
- (void)setSelectionChangeCallbacksDisabled:(BOOL)disabled;	// 0x353b935d
- (void)setSelectionGranularity:(int)granularity;	// 0x353c26cd
- (BOOL)setSelectionWithBasePoint:(CGPoint)basePoint extentPoint:(CGPoint)point baseIsStart:(BOOL)start;	// 0x353be039
- (BOOL)setSelectionWithBasePoint:(CGPoint)basePoint extentPoint:(CGPoint)point baseIsStart:(BOOL)start allowFlipping:(BOOL)flipping;	// 0x353c10f1
- (void)setSelectionWithFirstPoint:(CGPoint)firstPoint secondPoint:(CGPoint)point;	// 0x353bf119
- (void)setText:(id)text asChildOfElement:(id)element;	// 0x3539ac4d
- (void)setTimeoutsPaused:(BOOL)paused;	// 0x35399c79
- (BOOL)shouldEnableAutoShift;	// 0x353c3f81
- (void)smartExtendRangedSelection:(int)selection;	// 0x353c2729
- (BOOL)spaceFollowsWordInRange:(id)range;	// 0x353b9855
- (id)startPosition;	// 0x353c4181
- (void)stopLoading;	// 0x353a0edd
- (id)stringByEvaluatingJavaScriptFromString:(id)string forceUserGesture:(BOOL)gesture;	// 0x353b45e5
- (id)stringForRange:(id)range;	// 0x353a0e55
- (void)toggleBaseWritingDirection;	// 0x353be06d
- (void)updateLayout;	// 0x3539b309
- (VisiblePosition)visiblePositionForPoint:(CGPoint)point;	// 0x353bdaf5
- (id)webView;	// 0x3537aeed
- (id)webVisiblePositionForPoint:(CGPoint)point;	// 0x353bdf2d
- (id)windowObject;	// 0x353b486d
- (id)wordAtPoint:(CGPoint)point;	// 0x353bfd11
- (id)wordInRange:(id)range;	// 0x353b45a5
- (int)wordOffsetInRange:(id)range;	// 0x353b9819
- (id)wordRangeContainingCaretSelection;	// 0x353b96f9
- (id)wordsInCurrentParagraph;	// 0x353b988d
@end
