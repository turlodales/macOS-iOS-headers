//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PLChoosableItem : NSObject
{
    int _type;
    long long _width;
    long long _height;
    NSString *_uniformTypeIdentifier;
}

+ (id)choosableItemsFromCloudResources:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) long long height; // @synthesize height=_height;
@property(readonly, nonatomic) long long width; // @synthesize width=_width;
- (long long)compareUsingWidth:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToChoosableItem:(id)arg1;
- (id)description;
- (id)initWithCloudResource:(id)arg1;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2 type:(int)arg3 uniformTypeIdentifier:(id)arg4;

@end

