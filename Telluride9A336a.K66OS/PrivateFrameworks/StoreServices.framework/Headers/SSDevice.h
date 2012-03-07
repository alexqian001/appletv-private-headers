/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequestDelegate.h"
#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class NSMutableArray, NSString, NSSet, SSRequest;

@interface SSDevice : NSObject <SSRequestDelegate> {
@private
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	NSMutableArray *_loadStoreFrontHandlers;	// 8 = 0x8
	SSRequest *_loadStoreFrontRequest;	// 12 = 0xc
	NSString *_localStoreFrontIdentifier;	// 16 = 0x10
	BOOL _localStoreFrontIsTransient;	// 20 = 0x14
	id _mediaLibraryIdentifier;	// 24 = 0x18
	NSMutableArray *_simpleRequests;	// 28 = 0x1c
	id _softwareLibraryIdentifier;	// 32 = 0x20
	NSString *_synchedStoreFrontIdentifier;	// 36 = 0x24
}
@property(readonly, assign) NSSet *automaticDownloadKinds;	// G=0x341f977d; 
@property(copy) NSString *mediaLibraryIdentifier;	// G=0x341f9e09; S=0x341fac21; 
@property(copy) NSString *softwareLibraryIdentifier;	// G=0x341fa38d; S=0x341fad7d; 
@property(readonly, assign) NSString *storeFrontIdentifier;	// G=0x341fa5d5; 
@property(readonly, assign, getter=isStoreFrontIdentifierTransient) BOOL storeFrontIdentifierTransient;	// G=0x341faa81; 
@property(readonly, assign) NSString *synchedStoreFrontIdentifier;	// G=0x341fb031; 
+ (id)copyCachedAvailableItemKinds;	// 0x341fa7a9
+ (id)currentDevice;	// 0x341f9711
+ (BOOL)promptNeedsDisplay:(id)display;	// 0x341fa865
+ (BOOL)setCachedAvailableItemKinds:(id)kinds;	// 0x341fa929
+ (void)setLastPromptAttemptDate:(id)date forPromptWithIdentifier:(id)identifier;	// 0x341fa9a9
+ (void)setPromptWithIdentifier:(id)identifier needsDisplay:(BOOL)display;	// 0x341fa9ed
- (id)init;	// 0x341f93ad
- (void)_cleanupSimpleRequest:(id)request;	// 0x341fb3d5
- (void)_finishRequestWithError:(id)error;	// 0x341fb429
- (void)_invalidateSoftwareCUID;	// 0x341fb6ad
- (void)_postStoreFrontDidChangeNotification;	// 0x341fb749
- (void)_reloadAfterStoreFrontChange;	// 0x341fb7c9
- (void)_reloadStoreFrontIdentifier;	// 0x341fb9f9
- (void)_setLocalStoreFrontIdentifier:(id)identifier isTransient:(BOOL)transient;	// 0x341fbb11
- (BOOL)_setStoreFrontIdentifier:(id)identifier isTransient:(BOOL)transient;	// 0x341fbc25
- (void)_trackSimpleRequest:(id)request;	// 0x341fbd9d
- (void)_updateAutomaticDownloadKinds:(id)kinds withValue:(id)value completionBlock:(id)block;	// 0x341fbe01
// declared property getter: - (id)automaticDownloadKinds;	// 0x341f977d
- (id)copyStoreFrontRequestHeaders;	// 0x341f9821
- (void)dealloc;	// 0x341f9501
- (void)getAvailableItemKindsWithBlock:(id)block;	// 0x341f9885
// declared property getter: - (BOOL)isStoreFrontIdentifierTransient;	// 0x341faa81
- (void)loadStoreFrontWithCompletionHandler:(id)completionHandler;	// 0x341f9b19
// declared property getter: - (id)mediaLibraryIdentifier;	// 0x341f9e09
- (void)minusAutomaticDownloadKinds:(id)kinds withCompletionBlock:(id)completionBlock;	// 0x341fab55
- (void)reloadStoreFrontIdentifier;	// 0x341fabc1
- (void)request:(id)request didFailWithError:(id)error;	// 0x341fb2a5
- (void)requestDidFinish:(id)request;	// 0x341fb2e1
- (void)resetStoreFrontForSignOut;	// 0x341fb2f5
- (void)setAutomaticDownloadKinds:(id)kinds withCompletionBlock:(id)completionBlock;	// 0x341fabd1
// declared property setter: - (void)setMediaLibraryIdentifier:(id)identifier;	// 0x341fac21
// declared property setter: - (void)setSoftwareLibraryIdentifier:(id)identifier;	// 0x341fad7d
- (void)setStoreFrontIdentifier:(id)identifier isTransient:(BOOL)transient;	// 0x341faef1
- (void)setStoreFrontIdentifierWithInfo:(id)info;	// 0x341fb361
- (void)setStoreFrontWithResponseHeaders:(id)responseHeaders;	// 0x341fa051
- (void)showPromptWithIdentifier:(id)identifier completionHandler:(id)handler;	// 0x341fa0ad
// declared property getter: - (id)softwareLibraryIdentifier;	// 0x341fa38d
// declared property getter: - (id)storeFrontIdentifier;	// 0x341fa5d5
// declared property getter: - (id)synchedStoreFrontIdentifier;	// 0x341fb031
- (void)synchronizeAutomaticDownloadKinds;	// 0x341fb205
- (void)unionAutomaticDownloadKinds:(id)kinds withCompletionBlock:(id)completionBlock;	// 0x341fb239
@end
