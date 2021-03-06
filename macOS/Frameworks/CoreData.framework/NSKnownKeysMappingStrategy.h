//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreData/NSFastEnumeration-Protocol.h>
#import <CoreData/NSSecureCoding-Protocol.h>

@interface NSKnownKeysMappingStrategy : NSObject <NSSecureCoding, NSFastEnumeration>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) id *keys;
- (unsigned long long)fastIndexForKnownKey:(id)arg1;
- (unsigned long long)indexForKey:(id)arg1;
- (id)initForKeys:(id)arg1;
- (id)initForKeys:(id *)arg1 count:(unsigned long long)arg2;

@end

