//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFContentItem.h"

#import "WFContentItemClass.h"

@class WFShazamMedia;

@interface WFShazamMediaContentItem : WFContentItem <WFContentItemClass>
{
}

+ (BOOL)canLowercaseTypeDescription;
+ (id)propertyBuilders;
+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
- (void)getArtworkDataWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)preferredFileType;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (id)lyricsSnippetSynced;
- (id)lyricsSnippet;
- (id)videoURL;
- (id)isExplicit;
- (id)appleMusicURL;
- (id)shazamURL;
- (id)artworkURL;
- (id)title;
- (id)artist;
- (id)adamID;
@property(readonly, nonatomic) WFShazamMedia *media;

@end

