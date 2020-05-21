//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSURL;

@protocol UINSDocumentBrowserViewController <NSObject>
@property(nonatomic) __weak id <UINSWindow> window;
@property(copy, nonatomic) NSArray *customActions;
@property(nonatomic) BOOL allowsPickingMultipleItems;
@property(nonatomic) BOOL allowsDocumentCreation;
@property(retain, nonatomic) NSArray *documentTypes;
@property(nonatomic) __weak id <UINSDocumentBrowserViewControllerDelegate> delegate;
- (void)dismiss;
- (void)importDocumentAtURL:(NSURL *)arg1 nextToDocumentAtURL:(NSURL *)arg2 mode:(unsigned long long)arg3 completionHandler:(void (^)(NSURL *, NSError *))arg4;
- (void)revealDocumentAtURL:(NSURL *)arg1 importIfNeeded:(BOOL)arg2 completion:(void (^)(NSURL *, NSError *))arg3;
- (void)presentWithCompletionHandler:(void (^)(BOOL))arg1;
- (void)presentWithCompletion:(void (^)(void))arg1;
@end

