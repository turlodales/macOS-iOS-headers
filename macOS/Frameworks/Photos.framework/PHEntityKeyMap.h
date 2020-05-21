//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface PHEntityKeyMap : NSObject
{
    NSDictionary *_propertyKeysByEntityKey;
    NSDictionary *_entityKeysByPropertyKey;
}

+ (void)assertPropertyKey:(id)arg1 doesNotExistForEntityKey:(id)arg2 inEntityKeysByProperty:(id)arg3;
+ (id)transposePropertyKeysByEntityKey:(id)arg1;
- (void).cxx_destruct;
- (id)propertyKeyForEntityKey:(id)arg1;
- (id)entityKeyForPropertyKey:(id)arg1;
- (id)initWithPropertyKeysByEntityKey:(id)arg1;

@end

