/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebDocumentDOM.h"
#import "WebDocumentRepresentation.h"

@class WebHTMLRepresentationPrivate;

@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM> {
@private
	WebHTMLRepresentationPrivate *_private;	// 4 = 0x4
}
+ (id)supportedImageMIMETypes;	// 0x347977d5
+ (id)supportedMIMETypes;	// 0x347cd44d
+ (id)supportedNonImageMIMETypes;	// 0x34787d89
+ (id)unsupportedTextMIMETypes;	// 0x34788425
- (id)init;	// 0x347888f9
- (id)DOMDocument;	// 0x347cda01
- (BOOL)_isDisplayingWebArchive;	// 0x3478bfc5
- (void)_redirectDataToManualLoader:(id)manualLoader forPluginView:(id)pluginView;	// 0x347cd3b1
- (BOOL)canProvideDocumentSource;	// 0x347cdd05
- (BOOL)canSaveAsWebArchive;	// 0x347cdcc1
- (id)controlsInForm:(id)form;	// 0x347cd6b5
- (id)currentForm;	// 0x347cd769
- (void)dealloc;	// 0x34796b25
- (id)documentSource;	// 0x347cda45
- (BOOL)elementDoesAutoComplete:(id)complete;	// 0x347cd83d
- (BOOL)elementIsPassword:(id)password;	// 0x347cd7f5
- (id)elementWithName:(id)name inForm:(id)form;	// 0x347cd89d
- (void)finalize;	// 0x347cd3ed
- (void)finishedLoadingWithDataSource:(id)dataSource;	// 0x3478bee9
- (id)formForElement:(id)element;	// 0x347cd7ad
- (id)matchLabels:(id)labels againstElement:(id)element;	// 0x347cd5c9
- (void)receivedData:(id)data withDataSource:(id)dataSource;	// 0x3478ac8d
- (void)receivedError:(id)error withDataSource:(id)dataSource;	// 0x347cdd49
- (id)searchForLabels:(id)labels beforeElement:(id)element;	// 0x347cd68d
- (id)searchForLabels:(id)labels beforeElement:(id)element resultDistance:(unsigned *)distance resultIsInCellAbove:(BOOL *)cellAbove;	// 0x347cd619
- (void)setDataSource:(id)source;	// 0x347889d1
- (id)title;	// 0x34795f19
@end

