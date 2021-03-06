//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class MPMediaItem, NSString;

@interface WFMPMediaContentItem : WFGenericFileContentItem <WFContentItemClass>
{
}

+ (BOOL)isAvailableOnPlatform:(long long)arg1;
+ (BOOL)hasLibrary;
+ (id)pluralFilterDescription;
+ (id)filterDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)propertyBuilders;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)preferredFileType;
- (void)getPreferredFileSize:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *albumTitle;
@property(readonly, nonatomic) NSString *artist;
@property(readonly, nonatomic) NSString *title;
- (id)additionalRepresentationsForSerialization;
- (id)assetURL;
@property(readonly, nonatomic) MPMediaItem *mediaItem;
- (BOOL)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;
- (BOOL)getListAltText:(CDUnknownBlockType)arg1;
- (BOOL)getListSubtitle:(CDUnknownBlockType)arg1;

@end

