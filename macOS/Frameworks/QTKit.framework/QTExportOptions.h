//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@interface QTExportOptions : NSObject <NSMutableCopying, NSCopying>
{
}

+ (id)exportOptionsWithIdentifier:(id)arg1;
+ (id)localizedNameForExportOptionsIdentifier:(id)arg1;
+ (id)exportOptionsIdentifiersCompatibleWithMovie:(id)arg1;
+ (id)allExportOptionsIdentifiers;
+ (id)presetNameForIdentifier:(id)arg1;
+ (id)templateNameForIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 exportRef:(void *)arg2;
- (id)init;

@end

