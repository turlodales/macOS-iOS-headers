//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/WebBookmark.h>

@class NSArray, NSString, NSURL;

@interface WebBookmarkLeaf : WebBookmark
{
    NSString *_threadUnsafeUserVisibleURLString;
    BOOL _shouldReleaseIconForHost;
    BOOL _threadUnsafeShouldNeverFetchMetadata;
    BOOL _threadUnsafeHasUserDefinedPreviewText;
    NSURL *_threadUnsafeImageURL;
    NSString *_threadUnsafePreviewText;
    NSString *_threadUnsafeURLString;
    NSString *_threadUnsafeSiteName;
    NSArray *_threadUnsafeTopicQIDs;
}

- (void).cxx_destruct;
- (void)_notifyURLStringDidChangeFrom:(id)arg1 to:(id)arg2;
- (id)_mutableDictionaryRepresentation;
- (void)_updateStateHash:(struct SHA256 *)arg1;
- (void)setGroup:(id)arg1;
@property(readonly, nonatomic) NSURL *canonicalURL;
@property(readonly, copy, nonatomic) NSString *userVisibleURLString;
@property(copy, nonatomic) NSString *siteName; // @synthesize siteName=_threadUnsafeSiteName;
- (void)setURLString:(id)arg1 changeWasInteractive:(BOOL)arg2;
@property(readonly, copy, nonatomic) NSString *URLString; // @synthesize URLString=_threadUnsafeURLString;
- (long long)bookmarkType;
- (id)icon;
- (id)iconURLString;
- (BOOL)setPreviewText:(id)arg1 ignoringIfExistingIsUserDefined:(BOOL)arg2;
- (void)setUserDefinedPreviewText:(id)arg1;
@property(nonatomic) BOOL hasUserDefinedPreviewText; // @synthesize hasUserDefinedPreviewText=_threadUnsafeHasUserDefinedPreviewText;
- (void)_setPreviewText:(id)arg1 interactive:(BOOL)arg2;
@property(copy, nonatomic) NSString *previewText; // @synthesize previewText=_threadUnsafePreviewText;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_threadUnsafeImageURL;
@property(copy, nonatomic) NSArray *topicQIDs; // @synthesize topicQIDs=_threadUnsafeTopicQIDs;
@property(nonatomic) BOOL shouldNeverFetchMetadata; // @synthesize shouldNeverFetchMetadata=_threadUnsafeShouldNeverFetchMetadata;
- (BOOL)canOpenInTabs;
- (BOOL)isUserVisiblyEqualToBookmark:(id)arg1;
- (BOOL)mergeAttributesFromBookmark:(id)arg1;
- (BOOL)updateByCopyingAttributesFromBookmark:(id)arg1 withExistingBookmarksByUUID:(id)arg2;
- (id)description;
- (id)url;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTopSite:(id)arg1;
- (id)initFromDictionaryRepresentation:(id)arg1 topLevelOnly:(BOOL)arg2 withGroup:(id)arg3;

@end

