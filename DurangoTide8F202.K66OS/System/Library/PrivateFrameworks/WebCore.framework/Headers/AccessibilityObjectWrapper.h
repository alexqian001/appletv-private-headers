/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface AccessibilityObjectWrapper : NSObject {
@private
	AccessibilityObject *m_object;	// 4 = 0x4
	int m_isAccessibilityElement;	// 8 = 0x8
	unsigned long long m_accessibilityTraitsFromAncestor;	// 12 = 0xc
}
- (id)initWithAccessibilityObject:(AccessibilityObject *)accessibilityObject;	// 0x33ef47b5
- (void)_accessibilityActivate;	// 0x33f069d1
- (BOOL)_accessibilityIsLandmarkRole:(int)role;	// 0x33f033d5
- (id)_accessibilityLandmarkAncestor;	// 0x33f084c1
- (id)_accessibilityListAncestor;	// 0x33f034e5
- (id)_accessibilityNextElementsWithCount:(unsigned long)count;	// 0x33f06c11
- (id)_accessibilityParentForSubview:(id)subview;	// 0x33f06929
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)count;	// 0x33f06bcd
- (id)_accessibilityTableAncestor;	// 0x33f03525
- (unsigned long long)_accessibilityTraitsFromAncestors;	// 0x33ef51d5
- (id)_accessibilityWebDocumentView;	// 0x33f06c55
- (BOOL)_addAccessibilityObject:(AccessibilityObject *)object toTextMarkerArray:(id)textMarkerArray;	// 0x33f065ad
- (CGRect)_convertIntRectToScreenCoordinates:(IntRect)screenCoordinates;	// 0x33f07149
- (PassRefPtr<WebCore::Range>)_convertToDOMRange:(NSRange)domrange;	// 0x33f053c9
- (NSRange)_convertToNSRange:(Range *)nsrange;	// 0x33f05449
- (BOOL)_prepareAccessibilityCall;	// 0x33ef515d
- (BOOL)accessibilityCanFuzzyHitTest;	// 0x33f08ce5
- (CGPoint)accessibilityCenterPoint;	// 0x33f07039
- (NSRange)accessibilityColumnRange;	// 0x33f07af1
- (id)accessibilityContainer;	// 0x33f06d49
- (void)accessibilityDecreaseSelection:(int)selection;	// 0x33f06691
- (void)accessibilityDecrement;	// 0x33f06629
- (id)accessibilityElementAtIndex:(int)index;	// 0x33f088bd
- (int)accessibilityElementCount;	// 0x33f08ad1
- (void)accessibilityElementDidBecomeFocused;	// 0x33f068f5
- (id)accessibilityElementForRow:(int)row andColumn:(int)column;	// 0x33f07bd1
- (CGRect)accessibilityElementRect;	// 0x33f070c9
- (id)accessibilityFocusedUIElement;	// 0x33f06d0d
- (CGRect)accessibilityFrame;	// 0x33f06fc5
- (id)accessibilityHeaderElements;	// 0x33f07c19
- (id)accessibilityHint;	// 0x33f073c9
- (id)accessibilityHitTest:(CGPoint)test;	// 0x33f08b3d
- (void)accessibilityIncreaseSelection:(int)selection;	// 0x33f066a9
- (void)accessibilityIncrement;	// 0x33f0665d
- (BOOL)accessibilityIsComboBox;	// 0x33f07531
- (id)accessibilityLabel;	// 0x33f07f91
- (id)accessibilityLanguage;	// 0x33f08525
- (id)accessibilityLinkedElement;	// 0x33f06a05
- (void)accessibilityModifySelection:(int)selection increase:(BOOL)increase;	// 0x33f066c1
- (AccessibilityObject *)accessibilityObject;	// 0x33f033c1
- (id)accessibilityObjectForTextMarker:(id)textMarker;	// 0x33f04c69
- (id)accessibilityPlaceholderValue;	// 0x33f07aad
- (id)accessibilityPostProcessHitTest:(CGPoint)test;	// 0x33f033d1
- (void)accessibilityPostedNotification:(int)notification;	// 0x33ef4e75
- (BOOL)accessibilityRequired;	// 0x33f06b95
- (NSRange)accessibilityRowRange;	// 0x33f07b61
- (void)accessibilitySetPostedNotificationCallback:(/*function-pointer*/ void *)callback withContext:(void *)context;	// 0x33f034d5
- (id)accessibilityTitleElement;	// 0x33f07f55
- (unsigned long long)accessibilityTraits;	// 0x33ef4f9d
- (id)accessibilityURL;	// 0x33f07269
- (id)accessibilityValue;	// 0x33f07571
- (id)arrayOfTextForTextMarkers:(id)textMarkers;	// 0x33f05891
- (id)attachmentView;	// 0x33f06995
- (BOOL)containsUnnaturallySegmentedChildren;	// 0x33f06df5
- (void)dealloc;	// 0x33f08d81
- (void)detach;	// 0x33f08db1
- (BOOL)determineIsAccessibilityElement;	// 0x33f08339
- (NSRange)elementTextRange;	// 0x33f04de9
- (id)elementsForRange:(NSRange)range;	// 0x33f044f9
- (CGRect)frameForTextMarkers:(id)textMarkers;	// 0x33f036a9
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x33f08685
- (BOOL)isAccessibilityElement;	// 0x33f082e9
- (BOOL)isAttachment;	// 0x33f034a5
- (id)lineEndMarkerForMarker:(id)marker;	// 0x33f0402d
- (id)lineStartMarkerForMarker:(id)marker;	// 0x33f03e3d
- (id)nextMarkerForMarker:(id)marker;	// 0x33f03c61
- (int)positionForTextMarker:(id)textMarker;	// 0x33f05171
- (void)postFocusChangeNotification;	// 0x33f034c9
- (void)postLayoutChangeNotification;	// 0x33f034d1
- (void)postSelectedTextChangeNotification;	// 0x33f034cd
- (id)previousMarkerForMarker:(id)marker;	// 0x33f03a85
- (id)selectedTextMarker;	// 0x33f0421d
- (id)selectionRangeString;	// 0x33f044d1
- (id)stringForRange:(NSRange)range;	// 0x33f0468d
- (id)stringForTextMarkers:(id)textMarkers;	// 0x33f061b9
- (BOOL)stringValueShouldBeUsedInLabel;	// 0x33f033f9
- (AccessibilityTableCell *)tableCellParent;	// 0x33f03439
- (AccessibilityTable *)tableParent;	// 0x33f03471
- (id)textMarkerForPoint:(CGPoint)point;	// 0x33f03565
- (id)textMarkerForPosition:(int)position;	// 0x33f047b9
- (id)textMarkerRange;	// 0x33f04ea9
- (id)textMarkerRangeForSelection;	// 0x33f049f1
@end
