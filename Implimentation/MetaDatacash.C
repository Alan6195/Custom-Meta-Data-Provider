# Need to store metadata in a cache

const scalingPerImageId = {};

function add(imageId, scalingMetaData) {
  const imageURI = csUtils.imageIdToImageURI(imageId);
  scalingPerImageId[imageURI] = scalingMetaData;
}

# Create a providor function for specific imageId

function get(type, imageId) {
  if (type === 'scalingModule') {
    const imageURI = csUtils.imageIdToImageURI(imageId);
    return scalingPerImageId[imageURI];
  }
}

# Resgier the provider with Cornerstone.js

const scalingPerImageId = {};

function add(imageId, scalingMetaData) {
  const imageURI = csUtils.imageIdToImageURI(imageId);
  scalingPerImageId[imageURI] = scalingMetaData;
}

function get(type, imageId) {
  if (type === 'scalingModule') {
    const imageURI = csUtils.imageIdToImageURI(imageId);
    return scalingPerImageId[imageURI];
  }
}

export { add, get };