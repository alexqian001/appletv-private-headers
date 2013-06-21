/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebDocumentRepresentation.h"
#import "WebDocumentDOM.h"
#import <NSObject.h> // Unknown library

@class WebHTMLRepresentationPrivate;

@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM> {
	WebHTMLRepresentationPrivate *_private;	// 4 = 0x4
}
+ (id)supportedImageMIMETypes;	// 0x365e3d79
+ (id)supportedMIMETypes;	// 0x365e3c09
+ (id)supportedNonImageMIMETypes;	// 0x3659f9e9
+ (id)unsupportedTextMIMETypes;	// 0x3659ff9d
- (id)init;	// 0x365a063d
- (id)DOMDocument;	// 0x365e4385
- (BOOL)_isDisplayingWebArchive;	// 0x365e3fad
- (void)_redirectDataToManualLoader:(id)manualLoader forPluginView:(id)pluginView;	// 0x365e3f71
- (BOOL)canProvideDocumentSource;	// 0x365e403d
- (BOOL)canSaveAsWebArchive;	// 0x365e4081
- (id)controlsInForm:(id)form;	// 0x365e46b5
- (id)currentForm;	// 0x365e4671
- (void)dealloc;	// 0x365ac171
- (id)documentSource;	// 0x365e40c5
- (BOOL)elementDoesAutoComplete:(id)complete;	// 0x365e4589
- (BOOL)elementIsPassword:(id)password;	// 0x365e45ed
- (id)elementWithName:(id)name inForm:(id)form;	// 0x365e43c9
- (void)finalize;	// 0x365e3f11
- (void)finishedLoadingWithDataSource:(id)dataSource;	// 0x365a3d3d
- (id)formForElement:(id)element;	// 0x365e4631
- (id)matchLabels:(id)labels againstElement:(id)element;	// 0x365e4eed
- (void)receivedData:(id)data withDataSource:(id)dataSource;	// 0x365a2b29
- (void)receivedError:(id)error withDataSource:(id)dataSource;	// 0x365e3ff9
- (id)searchForLabels:(id)labels beforeElement:(id)element;	// 0x365e476d
- (id)searchForLabels:(id)labels beforeElement:(id)element resultDistance:(unsigned *)distance resultIsInCellAbove:(BOOL *)cellAbove;	// 0x365e4795
- (void)setDataSource:(id)source;	// 0x365a06e5
- (id)title;	// 0x365ac2c9
@end
