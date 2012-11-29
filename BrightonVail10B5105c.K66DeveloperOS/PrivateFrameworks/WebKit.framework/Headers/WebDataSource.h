/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"


@interface WebDataSource : NSObject {
	void *_private;	// 4 = 0x4
}
@property(assign) id dataSourceDelegate;	// G=0x3357591d; S=0x33575909; converted property
+ (id)_repTypesAllowImageTypeOmission:(BOOL)omission;	// 0x3355bc8d
+ (Class)_representationClassForMIMEType:(id)mimetype allowingPlugins:(BOOL)plugins;	// 0x3355c601
+ (void)initialize;	// 0x335752e5
- (id)initWithRequest:(id)request;	// 0x33575dbd
- (id)_URL;	// 0x33575d8d
- (void)_addSubframeArchives:(id)archives;	// 0x33575331
- (id)_documentFragmentWithArchive:(id)archive;	// 0x33575995
- (id)_documentFragmentWithImageResource:(id)imageResource;	// 0x33575c55
- (DocumentLoader *)_documentLoader;	// 0x33554095
- (void)_finishedLoading;	// 0x3355fcfd
- (id)_imageElementWithImageResource:(id)imageResource;	// 0x33575cc1
- (id)_initWithDocumentLoader:(PassRefPtr<WebDocumentLoaderMac>)documentLoader;	// 0x33552fdd
- (BOOL)_isDocumentHTML;	// 0x33547229
- (id)_mainDocumentError;	// 0x33575319
- (void)_makeRepresentation;	// 0x3355c329
- (void)_receivedData:(id)data;	// 0x3355e9c9
- (void)_replaceSelectionWithArchive:(id)archive selectReplacement:(BOOL)replacement;	// 0x33575945
- (id)_responseMIMEType;	// 0x3354725d
- (void)_revertToProvisionalState;	// 0x33575931
- (void)_setAllowToBeMemoryMapped;	// 0x335756f1
- (void)_setDeferMainResourceDataLoad:(BOOL)load;	// 0x33575525
- (void)_setMainDocumentError:(id)error;	// 0x33568aed
- (void)_setOverrideTextEncodingName:(id)name;	// 0x33575549
- (void)_setRepresentation:(id)representation;	// 0x3355c6a5
- (BOOL)_transferApplicationCache:(id)cache;	// 0x335753a5
- (id)_webView;	// 0x33549041
- (void)addSubresource:(id)subresource;	// 0x33576a05
- (id)data;	// 0x335760d1
// converted property getter: - (id)dataSourceDelegate;	// 0x3357591d
- (void)dealloc;	// 0x3355e50d
- (void)finalize;	// 0x33575fd9
- (id)initialRequest;	// 0x3355f0ed
- (BOOL)isLoading;	// 0x33576289
- (id)mainResource;	// 0x33576415
- (id)pageTitle;	// 0x335540a9
- (id)representation;	// 0x335540d1
- (id)request;	// 0x33547d09
- (id)response;	// 0x33547285
// converted property setter: - (void)setDataSourceDelegate:(id)delegate;	// 0x33575909
- (id)subresourceForURL:(id)url;	// 0x335767ad
- (id)subresources;	// 0x33576599
- (id)textEncodingName;	// 0x3357622d
- (id)unreachableURL;	// 0x33547cd9
- (id)webArchive;	// 0x335762a5
- (id)webFrame;	// 0x33549069
@end
