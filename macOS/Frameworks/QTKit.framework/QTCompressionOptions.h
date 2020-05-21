//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QTCompressionOptionsInternal;

@interface QTCompressionOptions : NSObject
{
    QTCompressionOptionsInternal *_internal;
    long long _reserved;
}

+ (id)compressionOptionsWithIdentifier:(id)arg1;
+ (id)compressionOptionsIdentifiersForMediaType:(id)arg1;
+ (BOOL)_canUseCompressionOptionsWithDescription:(id)arg1 forVisibility:(unsigned long long)arg2;
+ (id)_compressionOptionsPropertyList;
+ (id)compressionOptionsWithDescription:(id)arg1;
- (id)localizedCompressionOptionsSummary;
- (id)localizedDisplayName;
- (id)mediaType;
- (BOOL)isEqualToCompressionOptions:(id)arg1;
- (id)init;

@end

