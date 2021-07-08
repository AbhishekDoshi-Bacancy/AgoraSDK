// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from portrait_match.djinni

#import "BNBPortraitMatchBackendData.h"
#import "BNBPortraitMatchIndex.h"
#import "BNBPortraitMatchOutput.h"
#import "BanubaEffectPlayer/BNBFullImageData.h"
#import <Foundation/Foundation.h>
@class BNBPortraitMatch;


@interface BNBPortraitMatch : NSObject

+ (nullable BNBPortraitMatch *)create:(nonnull NSString *)imageIndexPath;

/** if indexesSize == 0, all exist will be returned, but slower */
- (nonnull NSArray<BNBPortraitMatchIndex *> *)processPhoto:(nonnull BNBFullImageData *)inputImage
                                               indexesSize:(int32_t)indexesSize;

/** return null optional when error */
- (nullable BNBPortraitMatchOutput *)blend:(nonnull BNBPortraitMatchBackendData *)data
                                      blur:(BOOL)blur
                                brightness:(BOOL)brightness;

@end
