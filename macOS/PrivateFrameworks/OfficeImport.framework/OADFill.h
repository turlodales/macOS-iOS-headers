//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADProperties.h>

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface OADFill : OADProperties <NSCopying>
{
    BOOL mDefinedByStyle;
    BOOL _definedByStyle;
}

@property BOOL definedByStyle; // @synthesize definedByStyle=_definedByStyle;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isOverridden;
- (BOOL)usesPlaceholderColor;
- (void)setStyleColor:(id)arg1;
- (float)alpha;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

