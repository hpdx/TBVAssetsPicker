//
//  ALAssetsFilter+DisplayType.h
//  PhotoBrowser
//
//  Created by tripleCC on 8/22/16.
//  Copyright © 2016 tripleCC. All rights reserved.
//

#import <AssetsLibrary/AssetsLibrary.h>
#import "TBVAssetsPickerTypes.h"

@interface ALAssetsFilter (TBVAssetsPicker)
+ (instancetype)tbv_assetsFilterWithCustomMediaType:(TBVAssetsPickerMediaType)mediaType;
@end
