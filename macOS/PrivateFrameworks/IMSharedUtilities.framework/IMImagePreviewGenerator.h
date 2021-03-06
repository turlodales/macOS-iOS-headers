//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMPreviewGenerator.h>

#import <IMSharedUtilities/IMPreviewGeneratorProtocol-Protocol.h>
#import <IMSharedUtilities/IMUTITypeInformation-Protocol.h>

@interface IMImagePreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
{
}

+ (struct CGImage *)newThumbnailFillToSize:(struct CGSize)arg1 imagePxSize:(struct CGSize)arg2 imageSource:(struct CGImageSource *)arg3 scale:(double)arg4;
+ (struct CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (id)UTITypes;
+ (id)fetchUTITypes;

@end

