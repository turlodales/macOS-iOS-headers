//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIFilterGenerator, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIFilterGeneratorCIFilter : CIFilter
{
    CIFilterGenerator *_generator;
    NSMutableArray *_inputKeys;
    NSMutableArray *_outputKeys;
    NSMutableDictionary *_customAttributes;
    BOOL _dirty;
}

+ (id)filterWithGenerator:(id)arg1;
- (id)_provideFilterCopyWithZone:(struct _NSZone *)arg1;
- (id)customAttributes;
- (id)outputImage;
- (id)outputKeys;
- (id)inputKeys;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)propagateConnections;
- (void)dealloc;
- (id)initWithGenerator:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

