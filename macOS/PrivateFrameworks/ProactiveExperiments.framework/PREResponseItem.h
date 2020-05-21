//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface PREResponseItem : NSObject <NSSecureCoding>
{
    NSNumber *_categoryId;
    NSNumber *_modelId;
    NSNumber *_responseClassId;
    NSNumber *_replySubgroupId;
    NSNumber *_replyTextId;
    NSString *_replyText;
    NSString *_language;
    NSNumber *_isCustomResponse;
}

+ (id)responseItemArrayFromResponseKitArray:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *isCustomResponse; // @synthesize isCustomResponse=_isCustomResponse;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) NSString *replyText; // @synthesize replyText=_replyText;
@property(readonly, nonatomic) NSNumber *replyTextId; // @synthesize replyTextId=_replyTextId;
@property(readonly, nonatomic) NSNumber *replySubgroupId; // @synthesize replySubgroupId=_replySubgroupId;
@property(readonly, nonatomic) NSNumber *responseClassId; // @synthesize responseClassId=_responseClassId;
@property(readonly, nonatomic) NSNumber *modelId; // @synthesize modelId=_modelId;
@property(readonly, nonatomic) NSNumber *categoryId; // @synthesize categoryId=_categoryId;
- (id)description;
- (BOOL)isEqualToResponseItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCategoryId:(id)arg1 modelId:(id)arg2 responseClassId:(id)arg3 replySubgroupId:(id)arg4 replyTextId:(id)arg5 replyText:(id)arg6 language:(id)arg7 isCustomResponse:(id)arg8;

@end

