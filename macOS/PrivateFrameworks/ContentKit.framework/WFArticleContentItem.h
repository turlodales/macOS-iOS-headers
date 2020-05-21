//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import "WFContentItemClass.h"

@class WFArticle;

@interface WFArticleContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)defaultSourceForRepresentation:(id)arg1;
+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (BOOL)supportedTypesMustBeDeterminedByInstance;
+ (id)attributedStringWithHTML:(id)arg1 named:(id)arg2;
+ (id)fileWithHTML:(id)arg1 named:(id)arg2;
+ (id)propertyBuilders;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) WFArticle *article;
- (BOOL)getListSubtitle:(CDUnknownBlockType)arg1;

@end

