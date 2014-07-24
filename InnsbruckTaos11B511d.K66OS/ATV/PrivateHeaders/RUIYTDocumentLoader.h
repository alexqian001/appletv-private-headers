/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;
@protocol RUIYTDocumentLoaderDelegate;

__attribute__((visibility("hidden")))
@interface RUIYTDocumentLoader : XXUnknownSuperclass {
	NSMutableArray *_documentsBeingLoaded;	// 4 = 0x4
	id<RUIYTDocumentLoaderDelegate> _delegate;	// 8 = 0x8
}
@property(assign) __weak id<RUIYTDocumentLoaderDelegate> delegate;	// G=0x2952ad; S=0x2952cd; @synthesize=_delegate
- (id)init;	// 0x294e99
- (void).cxx_destruct;	// 0x2952e1
- (void)_finalizeDocument:(id)document;	// 0x2951fd
- (void)cancelAllDocuments;	// 0x295115
- (void)cancelDocument:(id)document;	// 0x2950b1
- (void)dealloc;	// 0x294f05
// declared property getter: - (id)delegate;	// 0x2952ad
- (void)loadDocument:(id)document;	// 0x294f99
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2952cd
@end
