/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class UIPDFPageView, NSString, UIPDFAnnotationController, UIPDFAnnotationView, UIPDFSelection, UIPDFPopupAnnotation;

@interface UIPDFAnnotation : NSObject {
	CGPDFDictionaryRef _dictionary;	// 4 = 0x4
	CGColorRef _color;	// 8 = 0x8
	NSString *_annotationID;	// 12 = 0xc
	BOOL _hidden;	// 16 = 0x10
	void *_appearanceStream;	// 20 = 0x14
	CGPDFStringRef _pdfContents;	// 24 = 0x18
	UIPDFAnnotationView *_annotationView;	// 28 = 0x1c
	UIPDFPageView *_pageView;	// 32 = 0x20
	UIPDFSelection *_selection;	// 36 = 0x24
	UIPDFAnnotationController *controller;	// 40 = 0x28
	BOOL editable;	// 44 = 0x2c
	id data;	// 48 = 0x30
	NSString *_contents;	// 52 = 0x34
@private
	int _index;	// 56 = 0x38
@protected
	UIPDFPopupAnnotation *_popup;	// 60 = 0x3c
	NSString *_associatedAnnotationID;	// 64 = 0x40
	int annotationStyle;	// 68 = 0x44
}
@property(retain) NSString *annotationID;	// G=0x33327c01; S=0x33327c11; converted property
@property(assign, nonatomic) int annotationStyle;	// G=0x3332870d; S=0x3332871d; @synthesize
@property(retain, nonatomic) UIPDFAnnotationView *annotationView;	// G=0x33328569; S=0x33328579; @synthesize=_annotationView
@property(retain, nonatomic) NSString *associatedAnnotationID;	// G=0x333286d9; S=0x333286e9; @synthesize=_associatedAnnotationID
@property(retain, nonatomic) NSString *contents;	// G=0x33328665; S=0x33328675; @synthesize=_contents
@property(assign, nonatomic) UIPDFAnnotationController *controller;	// G=0x333285bd; S=0x333285cd; @synthesize
@property(retain, nonatomic) id data;	// G=0x33328631; S=0x33328641; @synthesize
@property(assign, nonatomic) BOOL editable;	// G=0x333285dd; S=0x333285ed; @synthesize
@property(readonly, assign) BOOL hidden;	// G=0x33327ff1; converted property
@property(assign, nonatomic) int index;	// G=0x33328699; S=0x333286a9; @synthesize=_index
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x3332859d; S=0x333285ad; @synthesize=_pageView
@property(assign, nonatomic) UIPDFPopupAnnotation *popup;	// G=0x333286b9; S=0x333286c9; @synthesize=_popup
@property(retain, nonatomic) UIPDFSelection *selection;	// G=0x333285fd; S=0x3332860d; @synthesize=_selection
+ (id)newAnnotationWithPage:(id)page fromArchive:(id)archive;	// 0x333276b9
- (id)init;	// 0x3332787d
- (id)initWithAnnotationDictionary:(CGPDFDictionaryRef)annotationDictionary;	// 0x3332797d
- (CGRect)Rect;	// 0x333280a1
// converted property getter: - (id)annotationID;	// 0x33327c01
// declared property getter: - (int)annotationStyle;	// 0x3332870d
- (int)annotationType;	// 0x33327c6d
// declared property getter: - (id)annotationView;	// 0x33328569
- (id)archive;	// 0x33327c71
// declared property getter: - (id)associatedAnnotationID;	// 0x333286d9
- (CGRect)bounds;	// 0x33328129
- (BOOL)containsPoint:(CGPoint)point;	// 0x3332814d
// declared property getter: - (id)contents;	// 0x33328665
// declared property getter: - (id)controller;	// 0x333285bd
// declared property getter: - (id)data;	// 0x33328631
- (void)dealloc;	// 0x33327b99
- (id)description;	// 0x33328459
- (void)drawInContext:(CGContextRef)context;	// 0x33328189
// declared property getter: - (BOOL)editable;	// 0x333285dd
- (CGRect)frame;	// 0x33328105
- (id)getImageNamed:(id)named ofType:(id)type;	// 0x33327f31
- (BOOL)hasPopUp;	// 0x3332834d
// converted property getter: - (BOOL)hidden;	// 0x33327ff1
// declared property getter: - (int)index;	// 0x33328699
- (BOOL)isMarkupAnnotation;	// 0x33328001
// declared property getter: - (id)pageView;	// 0x3332859d
- (const char *)pdfContents;	// 0x33328395
- (CGRect)popUpAnnotationRect;	// 0x333283d5
// declared property getter: - (id)popup;	// 0x333286b9
- (CGRect)rectIn:(CGPDFArrayRef)anIn;	// 0x33328005
// declared property getter: - (id)selection;	// 0x333285fd
// converted property setter: - (void)setAnnotationID:(id)anId;	// 0x33327c11
// declared property setter: - (void)setAnnotationStyle:(int)style;	// 0x3332871d
// declared property setter: - (void)setAnnotationView:(id)view;	// 0x33328579
// declared property setter: - (void)setAssociatedAnnotationID:(id)anId;	// 0x333286e9
// declared property setter: - (void)setContents:(id)contents;	// 0x33328675
// declared property setter: - (void)setController:(id)controller;	// 0x333285cd
// declared property setter: - (void)setData:(id)data;	// 0x33328641
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x333285ed
// declared property setter: - (void)setIndex:(int)index;	// 0x333286a9
// declared property setter: - (void)setPageView:(id)view;	// 0x333285ad
// declared property setter: - (void)setPopup:(id)popup;	// 0x333286c9
// declared property setter: - (void)setSelection:(id)selection;	// 0x3332860d
- (Class)viewClass;	// 0x33327c51
@end
