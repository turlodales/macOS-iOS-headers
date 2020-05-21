//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFGenericFileContentItem.h"

#import "WFContentItemClass.h"

@class WFWorkflowReference;

@interface WFWorkflowContentItem : WFGenericFileContentItem <WFContentItemClass>
{
}

+ (id)defaultSourceForRepresentation:(id)arg1;
+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
- (BOOL)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;
- (BOOL)getListSubtitle:(CDUnknownBlockType)arg1;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) WFWorkflowReference *workflowReference;

@end

