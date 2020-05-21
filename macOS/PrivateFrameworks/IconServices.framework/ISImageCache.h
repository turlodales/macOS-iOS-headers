//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ISImageCache : NSObject
{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_imageBagsByDescriptor;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *imageBagsByDescriptor; // @synthesize imageBagsByDescriptor=_imageBagsByDescriptor;
@property struct os_unfair_lock_s lock; // @synthesize lock=_lock;
- (id)allImages;
- (id)debugDescription;
- (void)setImage:(id)arg1 forDescriptor:(id)arg2;
- (id)imageForDescriptor:(id)arg1;
- (id)init;

@end

